#include <iostream>
using namespace std;
// calculate the value of nCr =( n! / (r! (n-r)!))

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    return num / denom;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r of nCr respectively: ";
    cin >> n >> r;
    cout << "The value of " << n << "C" << r << " is " << nCr(n, r);
    return 0;
}