#include<bits/stdc++.h>
using namespace std;

int main(){

    // time complexity : O(n^3) without pre-computation

    // int t; cin>>t;
    // while(t--){

    //     int a,b; cin>>a>>b;
    //     vector<int> v(a+10);
    //     for(int i=1; i<=a; i++){
    //         cin>>v[i];
    //     }

    //     while(b--){
    //         int l, r;
    //         cin>>l>>r;
    //         int gc=0;
    //         for(int i=1; i<=l-1; i++){
    //             gc=__gcd(v[i],gc);
    //         }
    //         for(int i=r+1; i<=a; i++){
    //             gc=__gcd(v[i],gc);
    //         }
    //         cout<<gc<<endl;
    //     }
        
    // }

    // by precomputation

    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        vector<int> v(a+10,0),f(a+10,0),back(a+10,0);
        f[0]=0; back[a+1]=0;
        for(int i=1; i<=a; i++){
            cin>>v[i];
        }
        for(int i=1; i<=a; i++){
            f[i]=__gcd(f[i-1],v[i]);
        }
        for(int i=a; i>=1; i--){
            back[i]=__gcd(back[i+1],v[i]);
        }

        while(b--){
            int l,r; cin>>l>>r;
            cout<<__gcd(f[l-1],back[r+1])<<endl;
        }
    }
    return 0;
}