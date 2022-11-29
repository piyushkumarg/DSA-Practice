#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    cout << "sum of array is " << sumOfArray(arr, n);
    return 0;
}