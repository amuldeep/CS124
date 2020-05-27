#include "userDatabase.h"

bool Insert(TREENODE* &root, const User tester){
    TREENODE** pNode = &root;
    
    while(*pNode){
        if(tester.userName == (*pNode)->tester.userName)
            return true;
        if(tester.userName < (*pNode)->tester.userName)
            pNode = &((*pNode)->left);
        else
            pNode = &((*pNode)->right);
        }
        TREENODE *newnode = new TREENODE;
        if(!newnode) return false;
        
        Copy (tester, newnode->tester);
        newnode->left = newnode->right = 0;
        *pNode = newnode;
        
        return true;
}
