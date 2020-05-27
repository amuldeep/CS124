//\begin{sourcecode}
#include "pizza.h"
bool LLQUEUE::Remove (Order &info){
    if(front == 0) return false;
    info = front -> info;
    
    NODE *next = front->next;
    delete front;
    front = next;
    if(front == 0)
        rear = 0;
    return true;
}
//\end{sourcecode}
