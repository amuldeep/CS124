//\begin{sourcecode}
#include "stack.h"

void Destroy(STACK &stack){
    delete[] stack.buf;
}
//\end{sourcecode}
