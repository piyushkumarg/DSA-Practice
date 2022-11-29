#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int *arr, int s, int e, int k)
{
    print(arr, s, e);
    // base case

    // element not found
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;
    cout << "mid is " << arr[mid] << endl
         << endl;
    // element found
    if (arr[mid] == k)
        return mid;

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{

    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 222;

    cout << binarySearch(arr, 0, size - 1, key) << endl;

    return 0;
}
