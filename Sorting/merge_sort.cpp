#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int right)
{
    int mid = (left + right) / 2;
    int i = left, j = mid + 1, k = left;
    int tmp[100000];
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    while (i <= mid)
        tmp[k++] = arr[i++];
    while (j <= right)
        tmp[k++] = arr[j++];

    for (int i = left; i <= right; i++)
        arr[i] = tmp[i];            // transfering all temporary arr to original arr.
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, right);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<"I am randibaaz\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    cout << "Before Merge sort is:\n";
    printArray(arr, n);
    cout << "After Merge sort done:\n";
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}