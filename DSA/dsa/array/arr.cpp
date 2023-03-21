#include<bits/stdc++.h>
using namespace std;

//arrays cannot be directly copied, and thus what is really passed is a pointer

int a[3]; // this has 0 initialized indexes

int main(){

    int a2[3]; // this has 3 garbage values

    int a3[3]={}; // this has 0 initialized indexes
    int a4[3]{}; //same as above equal has no meaning
    
    int a5[2][3]; //garbage of 0 initialized is same as 1D array

    //these are all array but stl is declared as array<int,4> arr;
    

    
    return 0;
}