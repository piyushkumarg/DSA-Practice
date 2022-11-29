#include <iostream>
using namespace std;

// Itrative solution
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (end - start > 1)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {

            end = mid;
        }
    }

    if (arr[start] == key)
    {
        return start;
    }
    else if (arr[end] == key)
    {
        return end;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key element to search: ";
    cin >> key;
    cout << "Element present at index: " << binarySearch(arr, n, key);
    return 0;
}
