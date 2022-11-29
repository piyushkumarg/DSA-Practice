#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZeroOne(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of array(0 1 only)\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: \n";
    printArray(arr, n);

    sortZeroOne(arr, n);
    cout << "\nSorted Array:\n";
    printArray(arr, n);
    return 0;
    return 0;
}