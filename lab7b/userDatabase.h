#include "queue.hpp"
#include <iostream>
struct Message
{
    std::string from;
    std::string to;
    std::string text;
};

/*struct Subscriber
{
    std::string name;
    Queue <Message> mailbox;
};

*/

struct User{
    std::string userName;
    std::string password;
    Queue <Message> mailbox;
};

struct TREENODE {
    User tester;
    TREENODE * left;
    TREENODE * right;
};

void Destroy(TREENODE *root);
TREENODE *Find(TREENODE *root, const User tester);
bool Insert(TREENODE* &root, const User tester);
bool Remove(TREENODE* &root, const User tester);

extern void Copy(const User data1, User data2);
