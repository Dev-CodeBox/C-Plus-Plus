#include <iostream>
using namespace std;

class queue
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        if (rear == size - 1)
        {
            cout << "overflow" << endl;
        }
        else if (rear == -1 && front == -1)
        {
            rear++;
            arr[rear] = value;
            front++;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "underflow" << endl;
        }
        else if (front == rear)
        {
            arr[front] = 0;
            front--;
            rear--;
        }
        else
        {
            arr[front] = 0;
            front++;
        }
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }
    int getFront()
    {
        return arr[front];
    }
    int getRear()
    {
        return arr[rear];
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    cout << q.getSize() << " ";
    cout << q.getFront() << " ";
    cout << q.getRear() << " ";

    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // // q.pop();
    // q.print();

    return 0;
}