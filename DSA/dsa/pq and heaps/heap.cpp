#include <bits/stdc++.h>
using namespace std;

// heap is a complete binary tree / almost complete
//  height = log(n)

// mostly implemented using array
// duplicates are allowed

// if every node is greater than its decendents -> maxheap
// else if every node is smaller -> minheap

// insertion

// first insert at last of array then keep comparing with parents
// insertion time = O(log(n))
void insert(int ar[], int indx)
{
    int temp = ar[indx];
    int i = indx;
    while (i > 1 && temp > ar[i / 2]) //if temp> then maxheap else minheap
    {
        ar[i] = ar[i / 2];
        i /= 2;
    }
    ar[i] = temp;
}

//only the largest element/root element can be deleted
int dlt(int ar[], int sz){
    int i,j,x,val;
    x=ar[sz];
    val=ar[1];
    ar[1]=ar[sz];
    ar[sz]=val;
    i=1; j=i*2;
    while(j<sz-1){
        if(ar[j+1]>ar[j]){
            j+=1;
        }
        if(ar[i]<ar[j]){
            swap(ar[i],ar[j]);
            i=j;
            j*=2;
        }
        else{
            break;
        }
    }
    return val;

}

int main()
{

    int arr[] = {0,1,2,3,4,5,6};
    int sz=sizeof(arr)/sizeof(arr[0]);

    for (int i = 2; i < sz; i++)
    {
        insert(arr, i);
        
    }
    // for(int i=sz-1; i>1; i--){
    //     dlt(arr,i);
    // }
    for (int j = 1; j < sz; j++)
        {
            cout << arr[j] << " ";
        }
        cout<<endl;
    


    return 0;
}