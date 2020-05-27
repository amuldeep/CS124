#pragma once

const int N = 10; //max morse code size
struct Morse
{
    char symbol;
    char code[N];
};

struct Tnode{
    char symbol;
    Tnode* left;
    Tnode* right;
    Tnode(){symbol = '*';
        left = right = 0;
    }
};
