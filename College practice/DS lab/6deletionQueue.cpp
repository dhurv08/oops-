//Program to delete elements in Queue
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}
    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;

        if (front == rear) {
            // Last element in the queue
            front = rear = -1;
        } else {
            front++;
        }
    }
};
int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();  // Trying to dequeue from an empty queue
    return 0;
}
