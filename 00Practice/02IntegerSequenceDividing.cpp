#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int main()
{
    fastread();
    ll n;
    cin >> n;
    if ((n * (n + 1) / 2) & 1)
        cout << 1;
    else
        cout << 0;
    return 0;
}