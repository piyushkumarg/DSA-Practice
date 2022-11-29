#include <iostream>
using namespace std;
/*
Find pivot in an array in sorted rotated array.
Example:
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

int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getPivot(arr, n);
    return 0;
}