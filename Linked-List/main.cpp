#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

Node *insertionAtHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node *insertionAtTail(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}

int getLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

Node *insertAtPosition(int position, int value, Node *&head, Node *&tail)
{
    int length = getLength(head);
    if (position == 1)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else if (position + 1)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    else
    {
    }

    return head;
}

void printHead(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertionAtTail(10, head, tail);
    // print(head);
    insertionAtTail(20, head, tail);
    // print(head);
    insertionAtTail(30, head, tail);
    // print(head);
    insertionAtTail(40, head, tail);
    // print(head);
    insertionAtTail(50, head, tail);
    printHead(head);

    // insertionAtHead(10,head,tail);
    // // print(head);
    // insertionAtHead(20,head,tail);
    // // print(head);
    // insertionAtHead(30,head,tail);
    // // print(head);
    // insertionAtHead(40,head,tail);
    // // print(head);
    // insertionAtHead(50,head,tail);
    // printHead(head);

    return 0;
}