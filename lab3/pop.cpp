//\begin{sourcecode}
#include "stack.h"

bool pop(STACK &stack, int &item){
    if(stack.sp == 0)
        return false;
    stack.sp--;
    item = stack.buf[stack.sp];
    
    return true;
}
//\end{sourcecode}
