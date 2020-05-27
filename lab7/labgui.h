// labgui.h 
#include <iostream>
const int WIDTH=300;
const int HEIGHT=300;
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Text_Editor.H>
void loginCB(Fl_Widget*, void*);
void readCB(Fl_Widget*, void*);
void sendCB(Fl_Widget*, void*);
extern Fl_Text_Editor* editMSG;
extern Fl_Text_Buffer* editBfr;
