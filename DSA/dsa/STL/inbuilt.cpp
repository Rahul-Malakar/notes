#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int mini=*min_element(v.begin(), v.end()); //return min element in the range

    //max_element to get max

    int sum = accumulate(v.begin(), v.end(), 0); //adds all value in range with initial value and 0
    
    int cnt = count(v.begin(), v.end(), 3); //counts occurences of 3 in range

    auto indx = find(v.begin(), v.end(), 2); //gives ptr of the element
    if(indx!=v.end()){
        cout<<*indx<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    reverse(v.begin(), v.end()); //reverse a vector, array, string

   //lambda function
    [](int x){return x+2;} (2);
    // [] - syntax
    // () - arguments
    // {} - body operations
    // () - function call

    //all of function

    all_of(v.begin(), v.end(), [](int x){return x>0;}); //returns true if all elements in the range satisfies lambda function

    //similar functions : any_of , none_of

    return 0;
}