//\begin{sourcecode}
#include "music.h"
#include "stack.h"
void playMusic(MusicElement music[],double tempo, int lastNote)
{    STACK stack; Play type; int current = 0; int finish = lastNote;
    const int MAXSTACK = 400;
    if(create(stack, MAXSTACK) == false){
        std::cerr << "**MUSIC: Stack allocation error. ***\n";return;}
    while(true)
    {type = music[current].type;if(current <= finish && type != Stop){
        if(type == Playnote){
        std::string currentNote = convertNote(music[current].note.tone);
        std::string currentDuration = 
        convertDuration(music[current].note.duration);current++;
            std::cout << "play " << currentNote <<
            " for " << currentDuration << " counts." << std::endl;
            std::string s = "play -qn synth ";std::string p = " pluck ";
            system((s +(currentDuration) + p + (currentNote)).c_str());}
        else if (type == Playfragment)
        {push(stack, current + 1);push(stack, finish);
            finish = music[current].fragment.finish;
            current = music[current].fragment.start;}}
    else if(not IsEmpty(stack)){pop(stack,finish);
        pop(stack,current);}else break;}Destroy(stack);}
//\end{sourcecode}
