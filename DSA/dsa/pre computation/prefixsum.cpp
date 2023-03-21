#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N];
int pfaa[N][N];
int aarr[N][N];
int pf[N];

int main(){

    //using prefix sum to find sum from l index to r index
    // int n; cin>>n;
    // for(int i=1; i<=n; i++){
    //     cin>>a[i];
    //     pf[i]=a[i]+pf[i-1];
    // }   
    // int t; cin>>t;
    // while(t--){
    //     int l, r;
    //     cin>>l>>r;
    //     cout<<pf[r]-pf[l-1]<<endl;
    // }

    //similar shit in 2d array
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>aarr[i][j];
            pfaa[i][j]=aarr[i][j]+pfaa[i-1][j]+pfaa[i][j-1]-pfaa[i-1][j-1]; //making prefix sum 2d array
        }
    }
    int q; cin>>q;
    //normal n^3 approach
    // while(q--){
    //     int a,b,c,d; cin>>a>>b>>c>>d;
    //     long long sum=0;
    //     for(int i=a; i<=c; i++){
    //         for(int j=b; j<=d; j++){
    //             sum+=pfaa[i][j];
    //         }
    //     }
    //     cout<<sum<<endl;
    // }

    //prefix sum approach
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        cout<<pfaa[c][d]-pfaa[a-1][d]-pfaa[c][b-1]+pfaa[a-1][b-1]<<endl;
    }


    return 0;
}