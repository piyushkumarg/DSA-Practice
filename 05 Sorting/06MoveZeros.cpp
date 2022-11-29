#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n)
{
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 0, 16, 0, 5, 0, 0, 25, 14, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before: ";
    print(arr, n);
    moveZeroes(arr, n);
    cout << "After: ";
    print(arr, n);

    return 0;
}