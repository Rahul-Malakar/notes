#include<bits/stdc++.h>
using namespace std;

void oneton(int num){
    
    if(num==0){
        return;
    }
    oneton(num-1);
    
    cout<<num<<endl;
}

void ntoone(int num){
    
    if(num==0){
        return;
    }
    cout<<num<<endl;
    ntoone(num-1);
    
    
}

int main(){

    int n; cin>>n;
    oneton(n);
    ntoone(n);

    return 0;
}

