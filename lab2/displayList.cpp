//\begin{sourcecode}
#include "lab.h"
void displayList(NODE* head)
{
    for (NODE * node = head; node ; node = node -> next)
        std::cout << node -> data << std::endl;
    
}
//\end{sourcecode}
