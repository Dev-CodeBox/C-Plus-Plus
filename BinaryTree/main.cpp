#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
    Node(int value)
    {
        this->data = value;
        left = NULL;
        right = NULL;
    }
};

Node *binaryTree()
{
    int value;
    cin >> value;
    if (value == -1)
    {
        return NULL;
    }
    else
    {
        Node *root = new Node(value);
        root->left = binaryTree();
        root->right = binaryTree();
        return root;
    }
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void InOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void levelOrder(Node *root)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    if (root == NULL)
    {
        return;
    }
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root;
    root = binaryTree();
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    preOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    levelOrder(root);

    // cout << root->data << " " << endl;

    return 0;
}