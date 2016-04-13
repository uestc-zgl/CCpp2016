#ifndef queque_h
#define queque_h
class Queue
{
public:
    void append(int item);
    int pop();
    bool is_empty();
    bool is_full();
private:
    int data[100];
    int tail = 0;
    int head = 0;
};
#endif
