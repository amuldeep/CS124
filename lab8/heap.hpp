// HEAP.H

// Heap template class

#ifndef _HEAP_H_
#define _HEAP_H_

template <class SOMETYPE>
class HEAP {
  public:
    enum HType {MIN,MAX};
  private:

    int size;       // Maximum size
    int nNodes;     // Current number of nodes
    SOMETYPE *buf;  // Pointer to the heap array
    HType t;

  public:
    HEAP (int a_size,HType t);
    ~HEAP();
    bool IsEmpty() {return (nNodes == 0);}
    bool IsFull() {return (nNodes == size);}
    bool Insert(SOMETYPE x);
    bool Remove(SOMETYPE &x);
};

//****************************************************************

template <class SOMETYPE>
HEAP<SOMETYPE>::HEAP(int a_size,HType type)

// Constructor: builds a heap of size "a_size".

{
    nNodes = 0; t=type;
    buf = new SOMETYPE[a_size+1]; // +1 because buf[0] is not used
    if (buf) size = a_size;
    else size = 0;
}

//****************************************************************

template <class SOMETYPE>
HEAP<SOMETYPE>::~HEAP()

// Destructor.

{
    delete [] buf;
}

//****************************************************************

template <class SOMETYPE>
bool HEAP<SOMETYPE>::Insert(SOMETYPE x)

// Inserts x into the heap.
// Returns true if successful, false if the heap is full.

{
    if (IsFull()) return false;

    nNodes++;  // The last node of the heap is now vacant.

    // Starting from the (vacant) last node, go from node i to
    //   its parent iParent and, as long as the parent is
    //   smaller than x, move the parent down:

    int i = nNodes;
    int iParent;
    while (i > 1) {
        iParent = i/2;
        if(t==MIN) if (x >= buf[iParent]) break;
        if(t==MAX) if (x <= buf[iParent]) break;
        buf[i] = buf[iParent];         // Move the parent down;
        i = iParent;                   // buf[i] is now vacant.
    }

    // Insert x into the created vacancy:
    buf[i] = x;

    return true;
}

//****************************************************************

template <class SOMETYPE>
bool HEAP<SOMETYPE>::Remove(SOMETYPE &x)

// Removes the largest element (from the root of the heap).
// Returns true if successful, false if the heap is empty.

{
    if (IsEmpty()) return false;

    // Retrieve the top element:

    x = buf[1];             

    // Starting from the vacant root, go from node iParent to its
    //   larger child i and, as long as that child
    //   is greater than the last element of the heap,
    //   move that child up:

    int iParent = 1;       // root
    int i = 2;             // its left child
    while (i <= nNodes) {
        // Set i to the right child, i+1, if it
        //   exists and is larger:
        if (i < nNodes && buf[i] < buf[i+1]) i++;

        // Compare with the last node:
        if (buf[i] <= buf[nNodes]) break;

        buf[iParent] = buf[i];   // Move the child up; 
        iParent = i;             // buf[iParent] is now vacant.
        i *= 2;                  // i is set to its left child
    }

    // Move the last element into the created vacancy:
    if (nNodes > 1) buf[iParent] = buf[nNodes];
    nNodes--;
 
    return true;
}

#endif // _HEAP_H_

