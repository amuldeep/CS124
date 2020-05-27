// lab.cpp 
#include "lab.h"
#include "heap.hpp"
double test[]={1,34,3,8,21,13,5,55,2,1};
int main()
{
    HEAP<int> priorityQ(MAXORDERS,HEAP<int>::MAX);
    for(auto e : test)
    {
        priorityQ.Insert(e);
    }
    
    int x;
    priorityQ.Remove(x);

    HEAP<int> ipriorityQ(MAXORDERS,HEAP<int>::MIN);
    for(auto e : test)
    {
        ipriorityQ.Insert(e);
    }
    ipriorityQ.Remove(x);

    priorityQ.Insert(92.00);
    priorityQ.Insert(94.00);
    return 0;
    
}
