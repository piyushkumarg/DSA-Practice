#include <iostream>
using namespace std;
/*
Print a to the power b (i.e a^b)
example
Input a=2 , b=3
output 8
*/

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // RECURSIVE CALL
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    int ans = power(a, b);

    cout << a << "^" << b << " = " << ans << endl;

    return 0;
}