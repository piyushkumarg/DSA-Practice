#include <iostream>
#include <cmath>
using namespace std;

long long int decimalToBinary(long long int n)
{
    unsigned long long int i = 0, ans = 0;

    // if number is negative
    if (n < 0)
    {
        n = pow(2, 16) + n;
    }

    while (n)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

int main()
{
    long long n;
    cout << "Enter a number(decimal): ";
    cin >> n;
    cout << "Binary number of " << n << " is " << decimalToBinary(n);
    return 0;
}
