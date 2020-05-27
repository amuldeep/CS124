//\begin{sourcecode}
#include "lab.h"
bool insertInOrder(std::string s, NODE* &head)
{
    NODE * newnode = new NODE;
    if(not newnode) return false;
    newnode->data = s;
    NODE *node = head, *prev = nullptr;
    while(node && node->data <= s){
        prev = node;
        node = node->next;}
    newnode->next = node;
    if(prev)
        prev->next = newnode;
    else
        head = newnode;
    return true;
    
}
//\end{sourcecode}
