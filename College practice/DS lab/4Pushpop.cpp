//Write a program to implement push and pop operations on a stack using a array.
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top < MAX_SIZE - 1)
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " onto the stack." << endl;
        }
        else
        {
            cout << "Stack overflow! Cannot push " << value << "." << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Nothing to clear in stack";
        }
        else
        {
            top--;
            arr[top];
            cout<<"Remaining elements are = "<<endl;
            for (int i = 0; i <= top; ++i)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
int main()
{
    Stack myStack;
    myStack.push(85);
    myStack.push(60);
    myStack.push(96);
    myStack.pop();
    return 0;
}