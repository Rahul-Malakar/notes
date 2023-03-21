#include <bits/stdc++.h>
using namespace std;

int main()
{

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

    // “Bidirectional selection sort” that goes through the list of elements by alternating between the smallest and largest element

    return 0;
}