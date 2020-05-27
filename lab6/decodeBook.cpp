#include "Telegraph.h"
void Telegraph::decode(char morse[], char text[]){
    char *dd;  Tnode * node;  node = root;
    for(dd = morse; *dd; dd++){
        if(*dd == DOT)
        {
            node = node -> left;
        }
        else if(*dd == DASH)
        {
            node = node -> right;
        }
        else if(*dd == ' ')
        {
            *text++ = node->symbol;
            *text++ = ' ';
            node = root;
            continue;
        }
    }
    *text = '\0';
}
        
