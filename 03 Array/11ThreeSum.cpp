#include <bits/stdc++.h>
using namespace std;
/*
Given an integer array of size n and a integer "s"
return the list of all 3 of elements such that each sum of elements of each pair equals "s"

codestudio question:
https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0

*/

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    // Write your code here.
    vector<vector<int>> ans;
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
            }
        }
    }

    for (auto x : s)
    {
        ans.push_back(x);
    }
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

    vector<vector<int>> answer = findTriplets(arr, n, s);

    cout << "\nthree whose sum is " << s << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    return 0;
}
