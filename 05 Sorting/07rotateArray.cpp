#include <iostream>
using namespace std;

/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/

void rotate(int nums[], int n, int k)
{
    int temp[n] = {0};

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = temp[i];
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
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    cout << "Before: ";
    print(nums, n);
    rotate(nums, n, k);
    cout << "After: ";
    print(nums, n);
    return 0;
}