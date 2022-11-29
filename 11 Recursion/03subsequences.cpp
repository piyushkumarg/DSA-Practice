#include <bits/stdc++.h>
using namespace std;

/*
Given a string "str" we have to find all non empty possible subsequences.
Input: abc
Output: a ab abc ac b bc c
*/

string solve(string str, int n)
{
    string ans;
    int ind = str.length() - 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (1 << i & n)
        {
            ans.push_back(str[ind]);
        }
        ind--;
    }
    return ans;
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    for (int i = 0; i < (1 << str.length()); i++)
    {
        string temp = solve(str, i);
        if (!temp.empty())
            ans.push_back(temp);
    }
    return ans;
}

int main()
{
    string str = "abc";
    vector<string> ans;
    ans = subsequences(str);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}