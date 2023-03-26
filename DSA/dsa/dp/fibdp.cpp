#include<bits/stdc++.h>
using namespace std;

// -------------------------------------------------------------
// fibonacci with memoization t: o(n), s: o(n) + o(n)

// int f(int n, vector<int> dp){

//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     return dp[n] = f(n-1, dp)+f(n-2, dp);
// }

// -------------------------------------------------------------

// fibonacci with tabulation t: o(n) s: o(n)

// int f(int n,vector<int> dp){

//     dp[0]=0; dp[1]=1;
//     for(int i=2; i<=n; i++){
//         dp[i] = dp [ i-1 ] + dp [i-2];
//     }
//     return dp[n];
  
// }
// -------------------------------------------------------------

// fibonacci with tabulation and space optimization t: o(n) s: o(1)

// int f(int n){

//     int pre2=0, pre=1, cur;
//     for(int i=2; i<=n; i++){
//         cur = pre + pre2;
//         pre2 = pre;
//         pre=cur;
//     }
//     return pre;
// }
// -------------------------------------------------------------

int main(){

    int n; cin>>n;

    return 0;
}