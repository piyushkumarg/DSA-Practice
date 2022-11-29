#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

bool solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    for (auto x : m)
        if (x.second > 2)
            return false;

    return true;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}