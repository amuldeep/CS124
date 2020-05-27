//\begin{sourcecode}
#include "pizza.h"
void dispatch(void*){
    std::cout << "ok" << std::endl;
    deliver();
    Fl::repeat_timeout(10,dispatch);
}
//\end{sourcecode}
