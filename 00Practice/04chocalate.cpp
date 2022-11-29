#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int solve(vector<int> v, int m)
{
    int n = v.size();
    if (m == 0 || n == 0)
        return 0;

    if (n < m)
        return -1;

    sort(v.begin(), v.end());
    int i = 0;
    int j = i + m - 1;

    int min = INT_MAX;

    while (j < n)
    {
        if (v[j] - v[i] < min)
        {
            min = v[j] - v[i];
        }

        i++;
        j++;
    }
    return min;
}

int main()
{
    vector<int> v = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout << solve(v, m);
    return 0;
}