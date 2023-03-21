#include<bits/stdc++.h>
using namespace std;


int lower_bound(vector<int> &v, int element){
    int lo = 0, hi = v.size()-1, mid;
    while(hi-lo>1){
        mid = (hi+lo)/2;
        //lb mein low values ans nhi ho sakta to separate kr diya
        if(v[mid]<element){
            lo = mid+1;
        }
        
        else{
            hi = mid;
        }
    }
    if(v[lo]>=element){
        return lo;
    }
    if(v[hi]>=element){
        return hi;
    }
    return -1;
}

int upper_bound(vector<int> &v, int element){
    int lo = 0, hi = v.size()-1, mid;
    while(hi-lo>1){
        // ub mein low values + equal wala v ans nhi ho sakta to separate kr diya
        mid = (hi+lo)/2;
        if(v[mid]<=element){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo]>element){
        return lo;
    }
    if(v[hi]>element){
        return hi;
    }
    return -1;
}



int main(){

    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int b; cin>>b; v.emplace_back(b);
    }

    int to_find; cin>>to_find;

    int lb = lower_bound(v,to_find);
    cout<<lb<<" "<<((lb==-1)?-1:v[lb])<<endl;

    // int ub = upper_bound(v,to_find);
    // cout<<ub<<" "<<((ub==-1)?-1:v[ub])<<endl;

    //binary search
    
    // int lo=0, hi=n-1, mid;
    // while(hi - lo>1){
    //     mid= (hi+lo)/2;
    //     if(v[mid]>to_find){
    //         hi=mid-1;
    //     }
    //     else{
    //         lo=mid;
    //     }
    // }
    // if(v[lo]==to_find){
    //     cout<<lo<<endl;
    // }
    // else if(v[hi]==to_find){
    //     cout<<hi<<endl;
    // }
    // else{
    //     cout<<-1<<endl;
    // }

    return 0;
}