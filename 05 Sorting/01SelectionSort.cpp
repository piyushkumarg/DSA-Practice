#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    // Write your code here.
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[] = {8, 22, 7, 9, 31, 5, 13};

    return 0;
}