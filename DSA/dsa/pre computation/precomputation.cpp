#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
long long fib[N];

int main(){

    //factorial by pre computation ----- O(n) else O(n^2) by normal method
    // ------------------------ pre computation
    // fact[0]=fact[1]=1;
    // for(int i=2; i<N; i++){
    //     fact[i]=fact[i-1]*i;
    // }
    // ----------------------------

    // int t; cin>>t;
    // while(t--){
    //     int n; cin>>n;
    //     cout<<fact[n]<<endl;
    // }

    //hashing is a precomputation technique

    //fib with pre computation ---------------
    // fib[0]=1; fib[1]=1;
    // for(int i=2; i<N; i++){
    //     fib[i]=fib[i-1]+fib[i-2];
    // }
    // -----------------------------------
    
    // int t; cin>>t;
    // while(t--){
    //     int n; cin>>n;
    //     cout<<fib[n]<<endl;
    // }

    return 0;
}