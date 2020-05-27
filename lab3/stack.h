//\begin{sourcecode}
#pragma once
struct STACK
{
    int size;
    int* buf;
    int sp;
};

bool create(STACK &stack, int size);
bool push(STACK &stack, int item);
bool pop(STACK &stack, int &item);
void Destroy(STACK &stack);

inline bool IsEmpty(STACK &stack){
    return (stack.sp == 0);
}

inline bool IsFull(STACK &stack){
    return (stack.sp = stack.size);
}


//\end{sourcecode}
