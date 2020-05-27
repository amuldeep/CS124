// lab.cpp
// g++ *.cpp `fltk-config --cxxflags --ldflags` -o lab

#include "labgui.h"
#include "eMail.h"
Fl_Double_Window w(WIDTH, HEIGHT);
Fl_Input* nameInput;
Fl_Button* login;
Fl_Button* read;
Fl_Button* send;
Fl_Text_Editor* editMSG;
Fl_Text_Buffer* editBfr;

int main()
{
    w.label("E-mail");
    nameInput = new Fl_Input(WIDTH*.3,HEIGHT*.05,WIDTH*.3,HEIGHT*.1,"Name:");
    login = new Fl_Button(WIDTH*.7,HEIGHT*.05,WIDTH*.2,HEIGHT*.1,"Login");
    login->callback(loginCB);
    
    read = new Fl_Button(WIDTH*.2,HEIGHT*.3,WIDTH*.2,HEIGHT*.1,"Read");
    read->callback(readCB);
    
    send = new Fl_Button(WIDTH*.6,HEIGHT*.3,WIDTH*.2,HEIGHT*.1,"Send");
    send->callback(sendCB);
    
    editBfr = new Fl_Text_Buffer();
    editMSG = new Fl_Text_Editor(WIDTH*.1,HEIGHT*.6,WIDTH*.8,HEIGHT*.35,"Edit:");
    editMSG->buffer(editBfr);
    
    w.show();
    return(Fl::run());
}
