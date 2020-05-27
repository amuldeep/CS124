//\begin{sourcecode}
#include "stack.h"

bool create(STACK &stack, int size){
    stack.buf = new int[size];
    if(!stack.buf)
        return false;
    stack.size = size;
    stack.sp = 0;
    return true;
}
//\end{sourcecode}
