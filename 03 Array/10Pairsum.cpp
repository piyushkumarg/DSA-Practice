#include <bits/stdc++.h>
using namespace std;
/*
Given an integer array of size n and a integer "s"
return the list of all pairs of elements such that each sum of elements of each pair equals "s"

codestudio question:
https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
*/

vector<vector<int>> pairSum(vector<int> &arr, int s)
{

    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
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
    cout << "Enter the sum: ";
    int s;
    cin >> s;

    vector<vector<int>> answer = pairSum(arr, s);

    cout << "\nPairs whose sum is " << s << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    return 0;
}
