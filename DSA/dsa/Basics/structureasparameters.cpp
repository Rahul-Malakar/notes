//in call function the struct can be directly passed like any other data type

//we can pass a struct by value even if it has an array(which cannot be passed by value)

//code for returning a "pointer to a structure"

#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

struct rectangle *fun(){

    struct rectangle *p;

    p=new rectangle;
    p->length= 10;
    p->breadth= 5;
    return p;
     
}

int main(){


    struct rectangle *ptr=fun();
    cout<<ptr->length<<endl<<ptr->breadth<<endl;

    return 0;
}