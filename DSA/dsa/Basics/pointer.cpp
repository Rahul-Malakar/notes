//pointer is a address variable
//pointer can access heap
//pointer always takes 2 bytes
#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){

    // int a=10;
    // int *p;
    // p=&a;

    // cout<<&a<<endl;
    // cout<<p;

    int A[5]={1,2,3,4,5}; // pointer to array
    // int *p;
    // p=A;

    // for(int i=0; i<5; i++){
    //     cout<<p[i]<<endl;
    // }

    int *p;
    //p=(int *)malloc(3*sizeof(int)); // c syntax
    p=new int[5];   //c++ syntax
    p[0]=10; p[1]=15; p[2]=20;
    for(int i=0; i<3; i++){
        cout<<p[i]<<endl;
    }
    
    //if we are creating some memory then we must learn to release that memory also

    delete []p;  //c++ syntax
    // free(p);   //c syntax

    return 0;
}

//size of pointer is independent of data type it is pointing to. (8 bytes)