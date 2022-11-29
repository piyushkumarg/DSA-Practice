#include <iostream>
#include <cmath>
using namespace std;
/*
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
*/

// Brute focre apporach
bool powerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

// Improved Brute force
bool powerOfTwoIm(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }

        if (ans < INT_MAX / 2)
        {
            ans = ans * 2;
        }
    }
    return false;
}

// Efficient Apporach
bool isPowerOfTwo(int n)
{
    if (n < 0)
        return 0;

    return (n & (n - 1)) == 0;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << isPowerOfTwo(n);
    return 0;
}