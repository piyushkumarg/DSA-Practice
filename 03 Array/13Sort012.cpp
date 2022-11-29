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

void sort012(int *arr, int n)
{
    int i = 0, j = 0, k = n - 1;
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of array(0 1 2 only)\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: \n";
    printArray(arr, n);

    sort012(arr, n);
    cout << "\nSorted Array:\n";
    printArray(arr, n);
    return 0;
    return 0;
}