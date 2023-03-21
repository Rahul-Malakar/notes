#include <bits/stdc++.h>
using namespace std;

int main()
{

    // pair<int, string> p;
    // // p = make_pair(2,"abcd");
    // p = {3,"hello"};
    // cout<<p.first<<endl;
    // cout<<p.second<<"\n";

    // // copy pair
    // pair<int, string> p1=p; //if reference &p1=p
    // cout<<p1.first;

    vector<pair<int, int>> v={{1,8},{2,7},{3,6}};
    for(auto it:v){
        cout<<it.first<< " "<<it.second;

    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it.first<< " "<<it.second;

    }
//sorting by second element function call sort(v.begin,v.end, sortkora
    // bool sortkora(pair<int, int> &a, pair<int,int> &b){
    //     return (a.second < b.second);
    // }


    return 0;
}