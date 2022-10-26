
 /*Approach:
 -Find the minimum element in the unsorted array and swap it with the element at the beginning.
 -The inner loop selects the minimum element in the unsorted array .*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int ans = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[ans])
            {
                ans = j;
            }
        }
        int temp = arr[ans];
        arr[ans] = arr[i];
        arr[i] = temp;
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
    cout << "Before Selection sort is:\n";
    printArray(arr, n);
    cout << "After Selection sort done:\n";
    selection_sort(arr, n);
    printArray(arr, n);
    return 0;
}