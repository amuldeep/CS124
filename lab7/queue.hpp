template <typename T>
struct Node
{
    T data;
    Node<T>* next;
};

template <typename T>
class Queue
{
    Node<T>* front;
    Node<T>* rear;
};
