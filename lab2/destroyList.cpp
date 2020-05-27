/*
return true if list is loaded correctly with the cities in the file
*/
//\begin{sourcecode}
#include "lab.h"
void destroyList(NODE* &head){
    NODE* temp;
    while(head && head->next){
        
        temp = head;
        head = head->next;
        delete temp;
    }
    delete head;
}

//\end{sourcecode}
