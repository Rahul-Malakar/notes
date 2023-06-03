#include<bits/stdc++.h>
using namespace std;

int main(){

    // repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion.

    
    int arr[] = {5,6,7,2,8,3,4};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {

        int min = i;
        for (int j = i + 1; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (i != min)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        

        // arr[i], arr[min] = arr[min], arr[i] one liner swap
    }
    for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    return 0;

    
    
}

// “Bidirectional selection sort” that goes through the list of elements by alternating between the smallest and largest element (n^2)

// approach - find smallest then swap with left, then find largest swap with right
//          - then left ++ and right

// #include <iostream>

// void bidirectionalSelectionSort(int arr[], int n) {
//     int left = 0;
//     int right = n - 1;

//     while (left < right) {
//         int minIdx = left;
//         int maxIdx = right;

//         // Find the minimum element in the unsorted portion and swap with left
//         for (int i = left + 1; i <= right; i++) {
//             if (arr[i] < arr[minIdx]) {
//                 minIdx = i;
//             }
//         }
//         std::swap(arr[left], arr[minIdx]);

//         // Find the maximum element in the unsorted portion and swap with right
//         for (int i = right - 1; i >= left; i--) {
//             if (arr[i] > arr[maxIdx]) {
//                 maxIdx = i;
//             }
//         }
//         std::swap(arr[right], arr[maxIdx]);

//         left++;
//         right--;
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original array: ";
//     printArray(arr, n);

//     bidirectionalSelectionSort(arr, n);

//     std::cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }
