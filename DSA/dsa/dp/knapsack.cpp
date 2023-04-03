#include<bits/stdc++.h>
using namespace std;

int solve(int n, int W, vector<int> &weights, vector<int> &values, vector<vector<int>> &dp){
    if(n==0){
        if(W>=weights[0]){
            return values[0];
        }
        else{
            return 0;
        }
    }
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    int notpick = 0 + solve(n-1, W, weights, values, dp);
    int pick = INT_MIN;
    if(weights[n]<=W){
        pick = values[n] + solve(n-1, W-weights[n],weights, values, dp);
    }
    return dp[n][W] = max(pick, notpick);
}

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
    vector<vector<int>> dp(n, vector<int>(weight+1, -1));
    cout<<solve(n-1, weight, weights, values, dp);
    return 0;
}