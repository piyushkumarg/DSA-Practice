#include <iostream>
using namespace std;

// Return minimum index
int minIndex(int a[], int i, int j)
{
    if (i == j)
        return i;

    // Find minimum of remaining elements
    int k = minIndex(a, i + 1, j);

    // Return minimum of current and remaining.
    return (a[i] < a[k]) ? i : k;
}

void selectionSort(int a[], int n, int index = 0)
{
    // Return when starting and size are same
    if (index == n)
        return;

    // calling minimum index function for minimum index
    int k = minIndex(a, index, n - 1);

    if (k != index)
        swap(a[k], a[index]);

    selectionSort(a, n, index + 1);
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
    selectionSort(arr, n);
    cout << "After sorting:\n";
    printArray(arr, n);

    return 0;
}
