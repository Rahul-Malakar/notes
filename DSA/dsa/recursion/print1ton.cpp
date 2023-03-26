#include<bits/stdc++.h>
using namespace std;

void oneton(int num){
    
    num--;
    if(num==0){
        return;
    }
    oneton(num);
    
    cout<<num<<endl;
}

void ntoone(int num){
    
    num--;
    if(num==0){
        return;
    }
    cout<<num<<endl;
    ntoone(num);
    
    
}

int main(){

    int n; cin>>n;
    oneton(n+1);
    ntoone(n+1);

    return 0;
}