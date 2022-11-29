#include <iostream>
using namespace std;

// Return only integer part of squreroot.
int mySqrt(int N)
{
    int s = 0;
    int e = N;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == N)
        {
            return mid;
        }

        if (square < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 39;
    int tempSol = mySqrt(n);
    cout << morePrecision(n, 3, tempSol);
    return 0;
}