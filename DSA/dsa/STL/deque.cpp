#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    
    deque<int> dq(2,12); //initialize 2 positions with 12 value
    // dq.assign(3,100); //initialize 3 positions with 100 value
    
    dq.insert(dq.begin()+1,2,4); // inserts two 4s at index 1
    
    dq.erase(dq.begin()+1); //erase element at index 1

    // dq.push_back(); dq.emplace_back(); dq.push_front(); dq.emplace_front(); dq.pop_back(); dq.pop_front();

    
    for(auto it:dq){
        cout<<it<<" ";
    }

    return 0;
}