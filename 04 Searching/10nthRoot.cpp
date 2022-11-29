#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

double esp = 1e-6;

ld multiply(ld mid, int n)
{
    ld ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= mid;
    }
    return ans;
}

int main()
{
    ld x;
    int n;
    cin >> x >> n;

    ld lo = 1, hi = x, mid;

    while (hi - lo > esp)
    {
        mid = (hi + lo) / 2;
        if (multiply(mid, n) < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << x << " --> " << lo << endl;
    return 0;
}