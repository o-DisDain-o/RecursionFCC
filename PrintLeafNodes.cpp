#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

void printLeafNodes(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
        return;
    }

    if (root->left)
        printLeafNodes(root->left, ans);

    if (root->right)
        printLeafNodes(root->right, ans);
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(8);
    root->right->left->left = newNode(6);
    root->right->left->right = newNode(7);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);

    vector<int> ans;
    printLeafNodes(root, ans);

    cout << "\nAll the leaf nodes are : ";
    for (int num : ans)
        cout << num << " ";

    return 0;
}