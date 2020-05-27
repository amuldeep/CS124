//\begin{sourcecode}
#include "pizza.h"
LLQUEUE orderQueue;
void order_cb(Fl_Button*,void*){
    
    Order o;
    std::cout << pizza->value() << std::endl;
    o.setOrder(pizza->value());
    
    
    std::cout << addressName->value() << std::endl;
    o.setAddress(addressName->value());
    
    status = orderQueue.Insert(o);
    
    if(status == true)
        std::cout << "Inserted" << std::endl;
    else std::cout << "Queue overflowed" << std::endl;
    
    
    
    std::string s = "Magnificent Choice";
    fl_alert(s.c_str());
}
//\end{sourcecode}
