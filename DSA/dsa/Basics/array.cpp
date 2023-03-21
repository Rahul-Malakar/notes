#include <iostream>
using namespace std;

int main(){
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=25;

    cout<<sizeof(A);

    return 0;
}

//main memory -> array + stack + heap
//variable or user-given size of array cannot be initialized. Gives an error.
// after declaration has garbage values
//dynamic array with all elements 0 -> A[]={0};