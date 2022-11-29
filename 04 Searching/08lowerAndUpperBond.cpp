#include <bits/stdc++.h>
using namespace std;

/*
lower bond = if elemnt is present the return index of that element
            if element is no present return just bigger index of element.

Upper bond = return index which is strictly grater than element

Example: Input: 6
                2 4 5 7 8 12
                7
        Output: Lower bond -> 3, value -> 7
                Upper bond -> 4, value -> 8

Example: Input: 6
                2 4 5 7 8 12
                6
        Output: Lower bond -> 3, value -> 7
                Upper bond -> 3, value -> 7


*/
int lower_bond(vector<int> &v, int element)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo) / 2;
        if (v[mid] < element)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] >= element)
        return lo;
    if (v[hi] >= element)
        return hi;
    return -1;
}

int upper_bond(vector<int> &v, int element)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo) / 2;
        if (v[mid] <= element)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] > element)
        return lo;
    if (v[hi] > element)
        return hi;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int element;
    cin >> element;
    int lb = lower_bond(v, element);
    int ub = upper_bond(v, element);
    cout << "lower bond -> " << lb << ", value -> " << (lb != -1 ? v[lb] : -1) << endl;
    cout << "upper bond -> " << ub << ", value -> " << (ub != -1 ? v[ub] : -1) << endl;
    return 0;
}