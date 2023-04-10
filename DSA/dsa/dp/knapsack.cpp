#include<bits/stdc++.h>
using namespace std;

// -------------------------memoization-----------------------------------

// int solve(int n, int W, vector<int> &weights, vector<int> &values, vector<vector<int>> &dp){
//     if(n==0){
//         if(W>=weights[0]){
//             return values[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     if(dp[n][W]!=-1){
//         return dp[n][W];
//     }
//     int notpick = 0 + solve(n-1, W, weights, values, dp);
//     int pick = INT_MIN;
//     if(weights[n]<=W){
//         pick = values[n] + solve(n-1, W-weights[n],weights, values, dp);
//     }
//     return dp[n][W] = max(pick, notpick);
// }

// -------------------------------------------------------------------------------

int main(){

    int weight; cin>>weight;
    int n; cin>>n;
    vector<int> weights, values;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        weights.emplace_back(a);
    }
    for(int i=0; i<n; i++){ 
        
        int b; cin>>b;
        values.emplace_back(b);
    }
    vector<vector<int>> dp(n, vector<int>(weight+1, 0));

    // cout<<solve(n-1, weight, weights, values, dp);      //memoization

    
// ---------------------------------tabulation----------------------------------

    // for(int i=weights[0]; i<=weight; i++) dp[0][i] = values[0];

    // for(int i=1; i<n; i++){
    //     for(int j=0; j<=weight; j++){
    //         int notpick = 0 + dp[i-1][j];
    //         int pick = INT_MIN;
    //         if(weights[i]<=j){
    //             pick = values[i] + dp[i-1][j-weights[i]];
    //         }
    //         dp[i][j] = max(pick, notpick);
    //     }
    // }
    // cout<<dp[n-1][weight]<<endl;

// ------------------------------------------------------------------------------------------


//-------------------------------further space optimization single array only--------------------------
    
    // vector<int> prev(weight+1, 0);
    // for(int i=weights[0]; i<=weight; i++){
    //     prev[i] = values[0];
    // }

    // for(int i = 1; i<n-1; i++){
    //     for(int j=weight; j>= 0; j--){
    //         int notpick = 0+prev[j];
    //         int pick = INT_MIN;
    //         if(weights[i]<=weight){
    //             pick = values[i] + prev[j - weights[i]];
    //         }
    //         prev[j] = max(pick, notpick);
    //     }
    // }
    // cout<< prev[weight];

//------------------------------------------------------------------------------------
    

    return 0;
}