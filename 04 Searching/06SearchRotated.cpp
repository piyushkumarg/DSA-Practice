#include <iostream>
using namespace std;

/*
Search in Rotated Sorted Array:-
Given a sorted rotated array and a key element k find the index of k.
Input: [7,9,1,2,3]
Output: 2  (Pivot element = 1)
*/
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
        return binarySearch(arr, 0, pivot - 1, k);
}

int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << findPosition(arr, n, k);
    return 0;
    return 0;
}