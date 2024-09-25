#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int qEle = q.front();
        q.pop();
        s.push(qEle);
    }
    while (!s.empty())
    {
        int sEle = s.top();
        s.pop();
        q.push(sEle);
    }
}

void reverseQueue2(queue<int> &q)
{
    stack<int> s;
    if (q.empty())
    {
        return;
    }
    s.push(q.front());
    q.pop();
    reverseQueue2(q);
    q.push(s.top());
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // reverseQueue(q);
    reverseQueue2(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}