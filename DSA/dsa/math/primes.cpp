#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    //primalty check method to check prime up to n
    
    // vector<bool> v(n+1,false);
    // for(int i=2; i<=n; i++){
    //     int fact=0;
    //     for(int j=1; j*j<=i; j++){
    //         if(i%j==0){
    //             fact++;
    //             if(j!=(n/j)){
    //                 fact++;
    //             }
    //         }
    //     }
    //     if(fact==2){
    //         v[i]=true;
    //     }
    // }
    // for(int i=1; i<=n; i++){
    //     if(v[i]){
    //         cout<<i<<endl;
    //     }
    // }

    //sieve of erathosthenes O(nlog(log(n)))

    vector<bool> v(n+1,1);
    v[0]=v[1]=0;

    for(int i=2; i<=n; i++){
        if(!v[i])continue;
        for(int j=i*i; j<=n; j+=i){
            v[j]=0;
        }
    }
    
    return 0;
}