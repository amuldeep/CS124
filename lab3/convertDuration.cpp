//\begin{sourcecode}
#include "music.h"
std::string convertDuration(int duration){
    std::string realDuration;
    
    if(duration == 4){
        realDuration = ".25";}
    else if(duration == 8){
        realDuration = ".5";}
    else if(duration == 12){
        realDuration == ".75";}
    else if (duration == 16){
        realDuration = "1";}
    else if (duration == 24){
        realDuration = "1.5";}
    else if (duration == 32){
        realDuration = "2";}
        
    return realDuration;
}
//\end{sourcecode}
