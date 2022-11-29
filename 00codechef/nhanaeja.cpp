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
    int n, k;
    cin >> n >> k;

    int f = 0, ith = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == k and f == 0)
            f = 1, ith = i;
    }

    if (f && (n == 1))
        return true;

    if (f && (ith != n - 1))
        return true;

    return false;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve() ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}