#include <iostream>
#include "Telegraph.h"
int main()
{
    Telegraph station;
    char text[80], morse[600];
    Telegraph::buildTree();
    std::cout << "\nEnter telegram ==> ";
    std::cin.getline(text, 80);
    std::cout << "\nSending > ";
    station.encode(text,morse);
    std::cout << "Morse Code: " << morse;
    std::cout << " >>> Recieved \n\n";
    station.decode(morse,text);
    std::cout << "Decoded: " << text << std::endl;
    
    Telegraph::destroyTree();

}
