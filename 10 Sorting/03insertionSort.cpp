#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    // Insert last element at its correct position
    // in sorted array.
    int last = arr[n - 1];
    int j = n - 2;

    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {2, 5, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting:\n";
    printArray(arr, n);
    insertionSort(arr, n);
    cout << "After sorting:\n";
    printArray(arr, n);

    return 0;
}
