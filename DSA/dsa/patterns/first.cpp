#include<bits/stdc++.h>
using namespace std;

int main(){


    int n; cin>>n;
    
    for(int i=0; i<=n; i++){
        int x;
        if(i&1){
            x=0;
        }
        else{
            x=1;
        }
        for(int j=0; j<n; j++){
            if(j<i+1){
                cout<<x<<" ";
                x = 1-x;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}