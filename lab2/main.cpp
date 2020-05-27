/*
The main function will test each of the linked list functions
*/
//\begin{sourcecode}
#include "lab.h"
int main(){
    NODE* head = nullptr;
        if(loadListUsingInsert("cities",head)){
            displayList(head);
            destroyList(head);}
    else
        {std::cout << "List not loaded successfully" << std::endl;}
        std::cout << "\n";
        head = nullptr;
     if(loadListDirectly("cities",head)){
         displayList(head);
         destroyList(head);}
    else
        {std::cout << "List not loaded successfully" << std::endl;}
        std::cout << "\n";
        head = nullptr;
     if(loadListUsingInsertInOrder("cities",head)){
         displayList(head);
         destroyList(head);}
    else
        {std::cout << "List not loaded successfully" << std::endl;}
}
//\end{sourcecode}
