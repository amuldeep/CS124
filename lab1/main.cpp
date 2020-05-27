//\begin{sourcecode}
#include "lab.h"
int main ()
{
    bool ok,found;
    std::string translation;
    std::vector<Entry> dict;
    ok = loadDictionary("dict.dat",dict);
    if (not ok)
        std::cout << "I didn't get the file!" << std::endl;
    std::string q;
    std::cin >> q;
    found = foundWord(q,dict,translation);
    if (found)
        std::cout << translation << " is the translation of " <<
        q << " in Punjabi" << std::endl;
}
//\end{sourcecode}
