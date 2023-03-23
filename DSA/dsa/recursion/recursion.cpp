#include<bits/stdc++.h>
using namespace std;

// sum of numbers 1 to n

// int printsum(int n){
//     if(n==0){   
//         return n;
//     }
//     return n + print(n-1);
// }

//reverse an array

void rev(int ar[],int start, int end){
    if(start>=end){
        for(int i=0; i<4; i++){
            cout<<ar[i]<<endl;
        }
        return;
    }
    swap(ar[start],ar[end]);
    rev(ar, start+1, end-1);
    
}

int main(){
    
    int arr[]{1,2,3,4};
    rev(arr,0,3);

    return 0;
}

