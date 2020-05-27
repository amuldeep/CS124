//\begin{sourcecode}
#include "pizza.h"

LLQUEUE::~LLQUEUE (){
    NODE *next;
    while(front){
        next = front->next;
        delete front;
        front = next;
    }
}
//\end{sourcecode}
