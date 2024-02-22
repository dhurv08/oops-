//Program to insert elements in a Queue
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue
{
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}
    void enqueue(int value)
    {
        if (rear == MAX_SIZE - 1)
        {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        cout << "Queue: " << value << endl;
    }
};
int main()
{
    Queue myQueue;
    myQueue.enqueue(76);
    myQueue.enqueue(30);
    myQueue.enqueue(13);
    return 0;
}
