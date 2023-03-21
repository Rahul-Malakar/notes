#include<bits/stdc++.h>
using namespace std;

double eps=1e-5;

int main(){

    double x;
    cin>>x;
    double lo=1, hi=x, mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        //number of mid multiplied = nth root
        if(mid*mid<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(8)<<lo<<endl<<hi;

    return 0;
}

// if we want pth root of number n
// time = p*log(n*(10^decimal_places))