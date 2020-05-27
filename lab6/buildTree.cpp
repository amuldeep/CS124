//#include <cctype>
#include "Telegraph.h"
#include "Morse.h"

Tnode * Telegraph::root = 0;
void Telegraph::buildTree()
{
    Tnode *node, *nextnode;
    int i; char *dd;
    root = new Tnode;    if (!root) return;
    root->symbol = ' ';
    for (i = 0; table[i].symbol; i++)
    {node = root;
        for(dd = table[i].code; *dd; dd++)
        {
            addTnode(*dd,node,nextnode);
            node = nextnode;
        }
        node->symbol = table[i].symbol;
    }
}
