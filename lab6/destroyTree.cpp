#include "Telegraph.h"
void Telegraph::destroyTree(){
    destroyTree(root);
    root = 0;
}

void Telegraph::destroyTree(Tnode * node){
    if(node){
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}
