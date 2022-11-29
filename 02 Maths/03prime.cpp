#include <iostream>
using namespace std;

bool prime(int n)
{
    bool isPrime = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
} // Time complexity O(n)

bool isPrime(int n)
{
    bool isPrime = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
} // Time complexity O(sqrt(n))

int main()
{
    int n;
    cout << "Enter a number to check prime: ";
    cin >> n;
    if (prime(n))
    {
        cout << n << " is a Prime number\n\n";
    }
    else
    {
        cout << n << " is not a Prime number\n\n";
    }

    return 0;
}