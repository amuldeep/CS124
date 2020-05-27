#include "userDatabase.h"
TREENODE *Find(TREENODE *root, const User tester){
    
    while(root){
        
    
    
    if (tester.userName == root->tester.userName)
        break;
    
    else if (tester.userName < root->tester.userName)
        root = root->left;
        
    else
        root = root->right;
    }
    return root;
}
