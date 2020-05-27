//\begin{sourcecode}
#include "pizza.h"

bool LLQUEUE::Insert (Order &info){
    NODE *newnode = new NODE;
    if (!newnode) return false;
    newnode -> info = info;
    newnode -> next = 0;
    
    if(rear == 0)
        front = rear = newnode;
    else{
        rear->next = newnode;
        rear = newnode;
    }
    return true;
}
//\end{sourcecode}
