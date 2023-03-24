#include <bits/stdc++.h>
using namespace std;
// --------------------------------------------
// sum of numbers 1 to n

// int printsum(int n){
//     if(n==0){
//         return n;
//     }
//     return n + print(n-1);
// }
// --------------------------------------------
// reverse an array

// void rev(int ar[],int start, int end){
//     if(start>=end/2){
//         // for(int i=0; i<4; i++){
//         //     cout<<ar[i]<<endl;
//         // }
//         return;
//     }
//     swap(ar[start],ar[end-1]);
//     rev(ar, start+1, end-1);

// }
// --------------------------------------------
// fibonacci

// int fib(int n){

//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);

// }
// --------------------------------------------
// all subsequence

// void printsubsequence(int i, vector<int> &vres, vector<int> v, int last)
// {
//     if (i == last)
//     {
//         for (auto it : vres)
//         {
//             cout << it << " ";
//         }
//         if(vres.size()==0){
//             cout<<"{}";
//         }
//         cout << endl;
//         return;
//     }
    
//     vres.emplace_back(v[i]);
//     printsubsequence(i + 1, vres, v, last);
//     vres.pop_back();
//     printsubsequence(i + 1, vres, v, last);
    
// }

// --------------------------------------------

// all the subsequence that add upto a particular value

void prints(){
    
}

int main()
{

    int n;
    cin >> n;

    vector<int> v, voro;
    for(int i=0; i<n; i++){
        int b; cin>>b; v.emplace_back(b);
    }
    int sum = 3;
    
    return 0;
}
