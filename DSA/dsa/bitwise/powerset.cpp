#include<bits/stdc++.h>
using namespace std;

void powerset(vector<char> orset, int size){
    int psize = pow(2,size);

    for(int i=0; i<psize; i++){
        for(int j=0; j<size; j++){
            if(i & (1<<j)){
                cout<<orset[j];
            }
        }
        cout<<endl;
    }
}

int main(){

    vector<char> v{'a','b','c'};
    powerset(v,3);
    return 0;
}