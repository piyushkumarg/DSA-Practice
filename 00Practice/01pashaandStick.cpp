#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define M 1000000007

int solve()
{
    int n;
    cin >> n;
    if (n & 1)
        return 0;
    else
    {
        if (n % 4)
            return (n / 4);
        else
            return (n / 4 - 1);
    }
}

int main()
{
    cout << solve();
    return 0;
}
