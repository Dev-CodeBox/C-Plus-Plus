#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top;

    stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow" << endl;
        }
        else
        {
            arr[top] = 0;
            top--;
        }
    }

    int getsize()
    {
        return top + 1;
    }

    int getTop()
    {
        if (top == -1)
        {
            return 0;
        }
        else
        {
            return top;
        }
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void printstack()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// void insertAtBottom(int value){

//         if (top == -1)
//         {
//             top++;
//             arr[top] = value;
//             return;
//         }

//         int topCopy = top;
//         s.pop();

//         insertAtBottom(value);

//         s.push(topCopy);
// //     }

int main()
{
    stack s(5);
    s.push(10);
    // s.printstack();
    s.push(20);
    // s.printstack();
    s.push(30);
    s.push(40);
    s.push(50);
    s.printstack();
    // s.getsize();
    // s.isEmpty();
    // s.push(60);
    // s.printstack();
    // s.pop();
    // s.printstack();
    // s.pop();
    // s.printstack();
    // s.pop();
    // s.printstack();
    // s.pop();
    // s.printstack();
    // s.pop();
    // s.printstack();
    // s.pop();
    // s.printstack();

    return 0;
}