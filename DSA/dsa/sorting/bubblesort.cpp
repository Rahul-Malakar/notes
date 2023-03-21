#include <stdio.h>
#include <stdlib.h>

//repeatitive swapping if two elements not it order

void bubblesort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int stop = 0, temp = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                stop = 1;
            }
        }
        if (stop == 0)
        {
            break;
        }
    }
}

int main()
{

    int arr[] = {5,6,7,2,8,3,4};
    int sizee=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,sizee);

    return 0;
}