#include<bits/stdc++.h>
using namespace std;

int main(){


    int n; cin>>n;
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
                if(j>=n-(n-i) && j<n-i){
                    cout<<'*';
                }
                else{
                    cout<<' ';
                }
            }
            cout<<endl;
    }


    return 0;
}