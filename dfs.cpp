#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    vector<node *> neighbours;
};

node *nodeMaker(int x)
{
    node *temp = new node;
    temp->val = x;
    return temp;
}

void nodeJoiner(node *a, node *b)
{
    a->neighbours.push_back(b);
    b->neighbours.push_back(a);
}

void result(int &a, bool &founda)
{
    cout << endl;
    if (founda == true)
        cout << a << " was found in graph";
    else
        cout << a << " was not found in graph";
}

bool dfs(node *head, int x, unordered_set<node *> &vis)
{
    if (head->val == x)
        return true;
    if (vis.find(head) == vis.end())
    {
        vis.insert(head);
        for (auto next : head->neighbours)
        {
            bool found = dfs(next, x, vis);
            if (found == true)
                return true;
        }
    }
    return false;
}

int main()
{
    node *n0 = nodeMaker(0);
    node *n1 = nodeMaker(1);
    node *n2 = nodeMaker(2);
    node *n3 = nodeMaker(3);
    node *n4 = nodeMaker(4);

    nodeJoiner(n0, n1);
    nodeJoiner(n0, n4);
    nodeJoiner(n1, n4);
    nodeJoiner(n1, n3);
    nodeJoiner(n1, n2);
    nodeJoiner(n2, n3);
    nodeJoiner(n3, n4);

    int x1 = 3, x2 = 5;
    unordered_set<node *> vis;
    bool foundx1 = dfs(n0, x1, vis);

    vis.clear();
    bool foundx2 = dfs(n0, x2, vis);

    result(x1, foundx1);
    result(x2, foundx2);
}