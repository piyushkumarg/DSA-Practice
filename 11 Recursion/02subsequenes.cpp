#include <bits/stdc++.h>
using namespace std;

/*
Given a string "str" we have to find all non empty possible subsequences.
Input: abc
Output: a ab abc ac b bc c
*/

void solve(string str, string output, int i, vector<string> &ans)
{
    if (i >= str.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // exclude
    solve(str, output, i + 1, ans);

    // include
    output.push_back(str[i]);
    solve(str, output, i + 1, ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
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
