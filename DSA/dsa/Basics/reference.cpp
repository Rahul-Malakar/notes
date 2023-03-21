// reference is nickname or area given to a variable
//must be initialized with declaration // &a=r

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    int a=10;
    int &r=a;

     cout<<r<<" "<<a<<endl;

    r=25;
    cout<<r<<" "<<a;

    //reference doesn't consume memory conceptually


    return 0;
} 