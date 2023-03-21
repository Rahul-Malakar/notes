#include<bits/stdc++.h>
using namespace std;

// virtually split into a sorted and an unsorted part
// insert elements of unsorted in sorted

void insertionsort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {8,5,6,4,7,2,3};
    int sizee=sizeof(arr)/ sizeof(arr[0]);
    insertionsort(arr, sizee);

    return 0;
}