#include "Telegraph.h"
void Telegraph::addTnode(char c, Tnode* node, Tnode*& next)
{
    if(c == DOT)
    {
        next = node->left;
        if(not next)
        {
            next = new Tnode;
            node->left=next;
        }
        
    }
    else if(c == DASH)
    {
        next = node->right;
        if(not next)
        {
            next = new Tnode;
            node->right=next;
        }
    }
}
