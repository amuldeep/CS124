//\begin{sourcecode}
#pragma once
class Order{
private:
    std::string order;
    std::string address;
public:
    std::string getOrder(){return order;}
    std::string getAddress(){return address;}
    void setOrder(std::string o) {order = o;}
    void setAddress(std::string o) {address = o;}
};
//\end{sourcecode}
