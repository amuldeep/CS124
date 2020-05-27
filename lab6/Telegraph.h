#pragma once
#include "Morse.h"
#include <iostream>

const char DOT = '.';
const char DASH = '-';
class Telegraph
{
private:
    static Morse table[40];
    static Tnode * root;
    static void destroyTree(Tnode *node);
    static void addTnode(char c, Tnode* node, Tnode *& nextnode);
public:
    static void buildTree();
    static void destroyTree();
    void encode(char text[], char morse[]);
    void decode(char morse[], char text[]);
};
