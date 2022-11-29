#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        // for rounds
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << count;
}

int main()
{
    int arr[] = {8, 22, 7, 9, 31, 5, 13};
    bubbleSort(arr, 7);
    return 0;
}