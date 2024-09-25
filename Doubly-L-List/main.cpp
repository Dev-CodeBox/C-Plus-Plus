#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int value)
    {
        this->prev = NULL;
        this->data = value;
        this->next = NULL;
    }
};

int getLength(Node *&head)
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
        head->prev = newNode;
        head = newNode;
        newNode->prev = NULL;
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
        newNode->prev = tail;
        tail = newNode;
        newNode->next = NULL;
    }
    return tail;
}

Node *inserAtPosition(int position, int value, Node *&head, Node *&tail)
{
    int length = getLength(head);
    if (position == 1)
    {
        insertionAtHead(value, head, tail);
    }
    else if (position == length + 1)
    {
        insertionAtTail(value, head, tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = tail;
        tail->prev = newNode;
    }
    return head;
}

void deleteAtPosition(int position, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        cout << "No node to delete" << endl;
        return;
    }

    if (head == tail)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else
    {
        if (position == 1)
        {
            Node *temp = tail;
            tail = temp->prev;
            temp->prev = NULL;
            tail->next = NULL;
            delete temp;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < position - 2; i++)
            {
                temp = temp->next;
            }
            Node *forward = temp->next;
            Node *backward = temp->prev;
            backward->next = forward;
            temp->prev = NULL;
            forward->prev = backward;
            temp->next = NULL;
            delete temp;
        }
    }
}

bool search(Node* &head, int target){
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp -> data == target)
        {
            cout << target << " Found";
            return true;
        }
        temp = temp -> next;
    }
    return false;
}



void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertionAtHead(10, head, tail);
    insertionAtHead(20, head, tail);
    insertionAtHead(30, head, tail);
    // print(head);

    search(head,50);

    // inserAtPosition(4,25,head,tail);
    // print(head);

    // deleteAtPosition(2, head, tail);
    // print(head);

    // insertionAtTail(10,head,tail);
    // insertionAtTail(20,head,tail);
    // insertionAtTail(30,head,tail);
    // print(head);

    return 0;
}