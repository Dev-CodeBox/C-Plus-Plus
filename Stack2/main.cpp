#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

void insertAtBottom(stack<int> &s, int &value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    int topcopy = s.top();
    s.pop();

    insertAtBottom(s, value);

    s.push(topcopy);
}

void findMid(stack<int> &s, int &count)
{
    if (count == 0)
    {
        cout << s.top() << " ";
        return;
    }
    int topCopy = s.top();
    s.pop();
    count--;
    findMid(s, count);
    s.push(topCopy);
}

bool checkSorted(stack<int> &s, int &element1)
{
    if (s.empty())
    {
        return true;
    }

    int element2 = s.top();
    if (element1 > element2)
    {
        element1 = element2;
        s.pop();
        checkSorted(s, element1);
        return true;
    }
    else
    {
        return false;
    }
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int topElement = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, topElement);
}

void sortedInsert(stack<int> &s, int &value)
{

    if (!s.empty() && s.top() < value)
    {
        s.push(value);
        return;
    }
    int topElement = s.top();
    s.pop();
    sortedInsert(s, value);
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 25;
    sortedInsert(s, value);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    // reverseStack(s);

    // int element1 = INT_MAX;
    // checkSorted(s, element1);

    // int count = (s.size()-1)/2;
    // findMid(s, count);

    // int value = 25;
    // insertAtBottom(s , value);
    return 0;
}