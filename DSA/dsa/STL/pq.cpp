#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    //first element of the queue is either the greatest or the smallest
    //non-increasing or non-decreasing order

    //Priority queues are built on the top of the max heap and use an array or vector as an internal structure.

    priority_queue<int> p;
    int arr[7]={4,5,7,2,4,6,3};
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;

    for(int i=0; i<7; i++){
        p.push(arr[i]);
    }
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }

    // priority queue is implemented as max heap by default in C++ but, it also provides us an option to change it to min heap by passing another parameter while creating a priority queue.

    priority_queue <int, vector<int>, greater<int>> gq;
    

    return 0;
}