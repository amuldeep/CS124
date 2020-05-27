//\begin{sourcecode}
#include <iostream>
#include <fstream>
#include <vector>
struct Entry {
    std::string word;
    std::string translation;
    
};
bool loadDictionary(std::string,std::vector<Entry>&);
bool foundWord(std::string, const std::vector<Entry>& d, std::string& t);
//\end{sourcecode}
