#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
vector<int> rotateArray(vector<int> &arr, int n)
{
    cout << "inside function: \n";
    vector<int> ans(n);
    for (int i = 1; i < n; i++)
    {
        ans[i - 1] = arr[i];
    }
    ans[n - 1] = arr[0];
    arr = ans;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return arr;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    vector<int> ans;
    ans = rotateArray(v, n);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}