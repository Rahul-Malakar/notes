#include<bits/stdc++.h>
using namespace std;

void hello(int num){
    
    num--;
    if(num==0){
        return;
    }
    hello(num);
    
    cout<<num<<endl;
}

int main(){

    int n; cin>>n;
    hello(n+1);

    return 0;
}