
 /*Approach: 

-Repeatedly swap 2 adjacent elements if arr[j] > arr[j+1] .
-Here, the maximum element of the unsorted array reaches the end of the unsorted array after each iteration.
-Unlike selection sort, here, sorting is done from the back as shown in the dry run.
-After (N-1) iterations , we get a sorted array. */

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    cout << "Before Bubble sort is:\n";
    printArray(arr, n);
    cout << "After Bubble sort done:\n";
    bubble_sort(arr, n);
    printArray(arr, n);
    return 0;
}
