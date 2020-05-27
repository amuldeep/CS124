//\begin{sourcecode}
#include "pizza.h"
Fl_Input* pizza;Fl_Input* driverName;Fl_Input* addressName;
bool status;
int main(){
    Fl_Cairo_Window cw(300,300);
    cw.color(fl_rgb_color(76,201,140));
    cw.label("Pizza Queues");
    Fl_Button order(150,150,50,30,"Order");
    order.callback((Fl_Callback*)order_cb);
    order.color(fl_rgb_color(100,188,231));
    pizza = new Fl_Input(100,100,180,20,"Pizza:");
    addressName = new Fl_Input(100,50,180,20,"Address:");
    Fl_Button driver(150,250,50,30,"Driver");
    driver.callback((Fl_Callback*)driver_cb);
    driver.color(fl_rgb_color(100,188,231));
    driverName = new Fl_Input(100,200,180,20,"Driver:");
    cw.show();
    std::string s = "Don't forget to submit an address";
    fl_alert(s.c_str());
    Fl::add_timeout(5,dispatch);
    Fl::run();
}
//\end{sourcecode}
