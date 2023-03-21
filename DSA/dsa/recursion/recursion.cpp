#include<bits/stdc++.h>
using namespace std;

int print(int n){
    if(n==0){   
        return n;
    }
    return n + print(n-1);
}

//learn normal recursion, backtracking

int main(){
    int n; cin>>n;
    cout<<print(n);
    return 0;
}