#include <bits/stdc++.h>
using namespace std;
// --------------------------------------------
// sum of numbers 1 to n

// int printsum(int n){
//     if(n==0){
//         return n;
//     }
//     return n + printsum(n-1);
// }
// --------------------------------------------
// reverse an array

// void rev(int ar[],int start, int end, int size){
//     if(start>=end/2){
//         for(int i=0; i<size; i++){
//             cout<<ar[i]<<endl;
//         }
//         return;
//     }
//     swap(ar[start],ar[end-1]);
//     rev(ar, start+1, end-1,size);

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

// only one of the subsequence that add upto a particular value

bool prints(int ind, int sum, int csum, vector<int> voro, vector<int> v, int last){
    if(ind==last){
        if(csum==sum){
            for(auto it:voro){
                cout<<it<<" ";
            } 
            cout<<endl;
            return true;
        }return false;
    }
    voro.emplace_back(v[ind]);
    csum+=v[ind];
    if(prints(ind+1, sum, csum, voro, v, last)){
        return true;
    }
    csum-=v[ind];
    voro.pop_back();
    if(prints(ind+1, sum, csum, voro, v, last)){
        return true;
    }
    return false;
}

//if all the subsequences are needed just remove true false stuff and make void function

// -----------------------------------------------------------

// number of subsequences which add upto k

// int prints(int ind, int sum, int csum, vector<int> voro, vector<int> v, int last){
//     if(ind==last){
//         if(csum==sum){
            
//             return 1;
//         }return 0;
//     }
//     voro.emplace_back(v[ind]);
//     csum+=v[ind];
//     int l = prints(ind+1, sum, csum, voro, v, last);
//     csum-=v[ind];
//     voro.pop_back();
//     int r= prints(ind+1, sum, csum, voro, v, last);
//     return l+r;

// }



int main()
{

    int n;
    cin >> n;
    vector<int> vres, vec;
    for(int i=0; i<n; i++){
        int a; cin>>a; vec.emplace_back(a);
    }
    cout<<prints(0, 6, 0, vres, vec, n)<<endl;
    
    
    return 0;
}
