// collection of disimilar data items under one name. (grouping the data items)
//used for defining user defined data types

//structure members cannot be initialized with decleration in c but 
// it is possible in c++. initialized ones are considered as default values.
#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x; //takes 4 bytes for char but use 1 byte, easier to take 4 bytes at a go for machine (this adjustment is called padding)
};

int main(){
    struct rectangle r1={10,5};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}

// struct card deck[52]={....} -> array of structures