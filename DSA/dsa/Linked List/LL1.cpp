#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{

    node *node1 = new node(2);
    cout << node1->data << endl;

    return 0;
}