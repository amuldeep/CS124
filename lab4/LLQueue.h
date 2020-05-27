//\begin{sourcecode}
#pragma once
#include "pizza.h"
#include "order.h"


struct NODE {
    Order info;
    NODE *next;
};

class LLQUEUE
{
private:
    NODE *front;
    NODE *rear;
public:
    LLQUEUE(){front = rear = 0;}
    ~LLQUEUE();
    bool Insert(Order &info);
    bool Remove(Order &info);
    bool isEmpty() {return(front == 0);}
};
//\end{sourcecode}
