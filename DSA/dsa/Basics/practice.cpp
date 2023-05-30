#include<iostream>
using namespace std;

int main(){

    int arr[] = {4,8,2,5,6,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size-1; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;   
}