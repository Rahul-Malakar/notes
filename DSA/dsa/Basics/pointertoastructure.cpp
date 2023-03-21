#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
        int length;
        int breadth;
    };
// int main(){

//     struct rectangle r={4,5};
//     struct rectangle *p=&r;
    

//     r.length=15;  //these three lines do the same thing
//     (*p).length=20; //that is accessing structure through pointer
//     p->length=25;
    
//     return 0;
// }

int main(){
    struct rectangle *p; //this pointer is in stack
    //we want to create a dynamic object in heap
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    // type casting because malloc returns void pointer
    //in cpp below
    //p=new rectangle;
    p->breadth = 10;
    p -> length = 5;
    cout<<p->breadth<<endl;

}