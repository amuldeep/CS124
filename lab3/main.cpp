//\begin{sourcecode}
#include "music.h"
const double tempo = 1.2;
static MusicElement music[] = {{Playnote,{16,8}},{Playnote,{16,8}},
    {Playnote,{16,16}},{Playnote,{16,8}},{Playnote,{16,8}},
    {Playnote,{16,16}},{Playnote,{16,8}},{Playnote,{18,8}},
    {Playnote,{14,8}},{Playnote,{15,8}},{Playnote,{16,32}},
    {Playnote,{17,8}},{Playnote,{17,8}},{Playnote,{17,8}},
    {Playnote,{17,8}},{Playnote,{17,8}},{Playnote,{16,8}},
    {Playnote,{16,8}},{Playnote,{16,8}},{Playnote,{16,8}},
    {Playnote,{15,8}},{Playnote,{15,8}},{Playnote,{16,8}},
    {Playnote,{15,16}},{Playnote,{18,16}},
    {Playfragment,{0,18}},
    {Playnote,{18,8}},{Playnote,{18,8}},{Playnote,{17,8}},
    {Playnote,{15,8}},{Playnote,{14,32}}, 
    {Stop,{0,0}}};
const int LastNote = sizeof(music)/sizeof(MusicElement);
int main()
{
    playMusic(music,tempo,LastNote);
}
//\end{sourcecode}
