#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
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

    cout << "Original Array: \n";
    printArray(arr, n);

    swapAlternate(arr, n);
    cout << "\nALternate swapped Array:\n";
    printArray(arr, n);
    return 0;
}
