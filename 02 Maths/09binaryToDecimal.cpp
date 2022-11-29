#include <iostream>
#include <cmath>
using namespace std;

long long int binaryToDecimal(long long int n)
{
    long long int ans = 0, i = 0;
    while (n)
    {
        // since n is decimal number so to find last digit we do n%10
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    return ans;
}

int main()
{
    long long int n;
    cout << "Enter a number(binary): ";
    cin >> n;
    cout << "Decimal of " << n << " is " << binaryToDecimal(n);
    return 0;
}