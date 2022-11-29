#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int startIndex = 0;
    int endIndex = n - 1;

    while (startIndex <= endIndex)
    {
        swap(arr[startIndex], arr[endIndex]);
        startIndex++;
        endIndex--;
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

    cout << "Original array: \n";
    printArray(arr, n);

    reverseArray(arr, n);
    cout << "\nReversed array:\n";
    printArray(arr, n);
    return 0;
}