#include <iostream>
using namespace std;

class deQueue
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    deQueue(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        front = -1;
        rear = -1;
    }

    void pushFront(int value)
    {
        if (front == 0)
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            front++;
            arr[front] = value;
        }
        else
        {
            front--;
            arr[front] = value;
        }
    }

    void pushBack(int value)
    {
        if (rear == size-1)
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


    void printQueue(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    deQueue dq(5);

    dq.pushFront(10);
    // dq.pushFront(10);
    // dq.pushFront(10);
    // dq.pushFront(10);
    // dq.pushFront(10);

    // dq.printQueue();

    // dq.pushFront(10);
    // dq.pushBack(20);
    // dq.pushFront(10);
    // dq.pushBack(30);
    // dq.pushFront(10);
    // // dq.pushBack(40);
    // // dq.pushBack(50);
    // // dq.pushBack(60);


    dq.printQueue();

    return 0;
}