#include<bits/stdc++.h>
using namespace std;

int main(){

    //array or vector must be sorted logn time
    //else n time

    //lb : that element or just higher
    
    //ub : only higher value

    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int b; cin>>b; v.emplace_back(b);
    }

    auto it = upper_bound(v.begin(),v.end(), 3);
    if(it==v.end()){
        cout<<"not found"<<endl;
        return 0;
    }
    cout<<(*it)<<endl;

    //lb ub can be used in case of set map pair string etc

    //if used on set with same method as array or vector then time = n
    //therefore use set.ub or set.lb

    //internal implementation in case of set or map - trees
    //for array or vector - binary search
  
    return 0;
}