//\begin{sourcecode}
#include "stack.h"

bool push(STACK &stack, int item){
    if(stack.sp == stack.size)
        return false;
    stack.buf[stack.sp] = item;
    stack.sp++;
    return true;
}
//\end{sourcecode}
