#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

double esp = 1e-6;

int main()
{
    ld x;
    cin >> x;

    ld lo = 1, hi = x, mid;

    while (hi - lo > esp)
    {
        mid = (hi + lo) / 2;
        if (mid * mid < x)
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