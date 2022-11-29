#include <iostream>
using namespace std;

/*
Given an array of integers of length n and a position 'M'.
You have to reverse the array after that position
Example:
Arr = {1,2,3,4,5,6} and M=3,
we have to reverse the subarray {5,6}
output: 1, 2, 3, 4, 6, 5
*/

void reverseArray(int arr[], int n, int m)
{
    int startIndex = m + 1;
    int endIndex = n - 1;

    while (startIndex <= endIndex)
    {
        swap(arr[startIndex], arr[endIndex]);
        startIndex++;
        endIndex--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int m = 3;
    int n = 6;
    reverseArray(arr, n, m);
    printArray(arr, n);
    return 0;
}