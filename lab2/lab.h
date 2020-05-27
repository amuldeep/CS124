//\begin{sourcecode}
#include <iostream>
#include <fstream>
struct NODE
{
  std::string data;
  NODE* next;  
};
bool loadListUsingInsert(std::string, NODE*&);
bool loadListUsingInsertInOrder(std::string, NODE*&);
bool insert(std::string, NODE*&);
bool insertInOrder(std::string, NODE*&);
void displayList(NODE*);
bool insertAtEnd(std::string, NODE*&);
bool loadListDirectly(std::string, NODE*&);
void destroyList(NODE*&);
//\end{sourcecode}
