#include <iostream>
using namespace std;
/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Example 1:

Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

*/

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    uint32_t n;
    cout << "Enter a binary number: \n";
    cin >> n;
    cout << hammingWeight(n);
    return 0;
}