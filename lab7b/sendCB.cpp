#include "labgui.h"
void sendCB(Fl_Widget*, void*)
{
    std::cout << "Send" << std::endl;
    std::cout << editBfr->text() << std::endl;
    //std::cout << editMSG->text() << std::endl;
}
