//\begin{sourcecode}
#include <cstdlib>
#include <iostream>
#include <sstream>
struct Note{int tone; int duration;};
struct Fragment{int start; int finish;};
enum Play {Playnote,Playfragment,Stop};
struct MusicElement{
    Play type;
    union {
        Note note;
        Fragment fragment;
    };
};
void playMusic(MusicElement music[], double tempo, int lastNote);
std::string convertNote(int note);
std::string convertDuration(int duration);
//\end{sourcecode}
