#include <iostream>
#include <cmath>
using namespace std;

/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
*/

int bitwiseComplement(int n)
{
    if (n == 0)
        return 1;

    int ans = 0, fac = 1;
    while (n)
    {
        int bit = !(n % 2);
        ans += fac * bit;
        fac *= 2;
        n /= 2;
    }
    return ans;
}

int findComplement(int n)
{
    if (n == 0)
        return 1;
    int ans = 0, i = 0;
    while (n)
    {
        ans += pow(2, i) * (!(/* n % 2 */ n & 1));
        /* n /= 2; */
        n = n >> 1;
        i++;
    }
    return ans;
}

// Note: findComplement function is faster than bitwiseComplement function.

int main()
{
    int n;
    cout << "Enter a number(decimal): ";
    cin >> n;
    cout << "1's complement of " << n << " is " << bitwiseComplement(n);
    cout << "\n1's complement of " << n << " is " << findComplement(n);
    return 0;
}