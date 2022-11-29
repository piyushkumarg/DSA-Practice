#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

pair<int, int> solve(vector<int> v)
{
    pair<int, int> p;

    if (v.size() == 1)
    {
        p.first = v[0];
        p.second = v[0];
        return p;
    }

    if (v[0] < v[1])
    {
        p.first = v[0];
        p.second = v[1];
    }
    else
    {
        p.first = v[1];
        p.second = v[0];
    }

    for (int i = 2; i < v.size(); i++)
    {
        if (v[i] < p.first)
        {
            p.first = v[i];
        }
        else
            p.second = v[i];
    }
    return p;
}

int main()
{
    vector<int> v = {3,
                     5,
                     4,
                     1,
                     9};
    pair<int, int> ans;
    ans = solve(v);
    cout << ans.first << " " << ans.second;

    return 0;
}