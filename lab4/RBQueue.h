//\begin{sourcecode}
#pragma once
#include "pizza.h"
#include <string>
const int BUFSIZE = 256;
class RBQUEUE{
private:
    std::string name;
    std::string buf[BUFSIZE];
    int front;
    int rear;
    int nextIndex(int index){
        if(++index == BUFSIZE) index = 0;
        return index;
    }
public:
    void setName(std::string s) {name = s;}
    RBQUEUE () {front = rear = 0;}
    ~RBQUEUE () {/* */}
    bool Insert(std::string s);
    bool Remove (std::string &s);
    bool isEmpty() {return (front==rear);}
    bool isFull() {return (nextIndex(rear) == front);}
};
//\end{sourcecode}
