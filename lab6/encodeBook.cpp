#include "Telegraph.h"
void Telegraph::encode(char text[], char morse[])
{
    int i;
    char c, *t, *dd;
    for(t = text; *t; t++){
        c = toupper(*t);
        if (c==' '){
            *morse++ = ' '; continue;}
        for(i=0;table[i].symbol; i++)
            if(table[i].symbol == c)break;
            if(!table[i].symbol)continue;
            
            dd = table[i].code;
            while (*dd) *morse++ = *dd++;
            *morse++ = ' ';
        }
        *morse = '\0';
    }
