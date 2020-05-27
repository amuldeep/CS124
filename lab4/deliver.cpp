//\begin{sourcecode}
#include "pizza.h"

void deliver(){
    while(status == true && !driverQueue.isEmpty() && !orderQueue.isEmpty()){
        Order myOrder;
        orderQueue.Remove(myOrder);
        std::string driverName ;
        driverQueue.Remove(driverName);
        std::string s = "Driver " + driverName + " is delivering the "
        + myOrder.getOrder() + " pizza to " + myOrder.getAddress();
        fl_alert(s.c_str());
    }
}
//\end{sourcecode}
