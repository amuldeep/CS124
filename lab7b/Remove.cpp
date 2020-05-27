#include "userDatabase.h"

bool Remove(TREENODE* &root, const User tester){
    if (!root)
        return false;
    
    if(tester.userName == root->tester.userName){
        TREENODE *oldroot = root;
        
        if(root->left == 0)
            root = root->right;
        else if(root->right == 0)
            root = root->left;
        if(oldroot !=root){
            delete oldroot;
            return true;}
            
            
        TREENODE *parent = root;
        TREENODE *next = root -> right;
        while(next->left){
            parent = next;
            next = next->left;
        }
        if(parent == root)
            root->right = next->right;
        else
            parent->left = next->right;
        
        next->left = root->left;
        next->right = root->right;
        delete root;
        root = next;
        return true;
    }
    else if(tester.userName < root->tester.userName)
        return Remove(root->left, tester);
    else
        return Remove(root->right, tester);
}
