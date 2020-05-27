//\begin{sourcecode}
#include "music.h"

std::string convertNote(int note){
    std::string realNote;
    
    if(note == 12){
        realNote="A";}
    else if(note == 13){
        realNote="B";}
    else if(note == 14){
        realNote="C";}
    else if(note == 15){
        realNote="D";}
    else if(note == 16){
        realNote="E";}
    else if(note == 17){
        realNote="F";}
    else if(note == 18){
        realNote="G";}
return realNote;
}
//\end{sourcecode}
