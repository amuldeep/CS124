/*
return true if list is loaded correctly with the cities in the file
*/
//\begin{sourcecode}
#include "lab.h"
bool loadListDirectly(std::string f, NODE*& head)
{
    std::ifstream ifs(f); if (not ifs) return false;
    std::string s;
    while(ifs >> s){insertAtEnd(s,head);}
    
    //head = new NODE
    return true;
}
//\end{sourcecode}
