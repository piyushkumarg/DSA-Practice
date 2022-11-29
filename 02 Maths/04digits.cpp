#include <iostream>
using namespace std;

/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Example 1:

Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
*/

int subtractProductAndSum(int n)
{
    int product = 1, sum = 0;
    while (n)
    {
        product *= n % 10;
        sum += n % 10;
        n = n / 10;
    }
    return product - sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << subtractProductAndSum(n);
    return 0;
}