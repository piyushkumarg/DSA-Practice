#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int array[1000];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter " << size << " elements of array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "\nArray is \n";
    printArray(array, size);
    return 0;
}