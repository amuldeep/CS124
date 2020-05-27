#include "queue.hpp"
struct Message
{
    std::string from;
    std::string to;
    std::string text;
};

struct Subscriber
{
    std::string name;
    Queue <Message> mailbox;
};
const int MAXUSERS = 10;
Subscriber subscriber[MAXUSERS];
