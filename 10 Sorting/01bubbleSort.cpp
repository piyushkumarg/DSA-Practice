#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{

    // base case - already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    int count = 0;
    // 1 case sovle karlia - largest element ko end me rakh dega
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }

    if (count == 0)
        return;

    // Recursive Call
    bubbleSort(arr, n - 1);
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
    bubbleSort(arr, n);
    cout << "After sorting:\n";
    printArray(arr, n);

    return 0;
}
