#include <bits/stdc++.h>
using namespace std;

/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

Example 2:
Input: nums = [1,1,2]
Output: [1]
*/

vector<int> findDuplicates(vector<int> &nums)
{
    int size = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> ans;

    for (int i = 1; i < size; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            ans.push_back(nums[i]);
        }
    }

    // for (auto x : nums)
    // cout << x << " ";
    // cout<<endl;

    return ans;
}

int main()
{

    int n;
    vector<int> arr;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the " << n << " elements of array\n";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<int> answer = findDuplicates(arr);

    cout << "\nRepeated elements are: \n";
    for (auto x : answer)
        cout << x << " ";
    cout << endl;
    return 0;
}