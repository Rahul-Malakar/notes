#include <iostream>
using namespace std;

// pointer pointing to an array
// array cannot be passed by value, it is always passed by address

int * fun(int size)
    {
        int *p;
        p = (int *)malloc(size * sizeof(int)); //memory allocated in heap
        p[0]=25;
        return p; //returning an array
    }

int main()
{

    int *A;
    A=fun(5);
    cout<<A[0];
    return 0;
}