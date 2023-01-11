#include <iostream>
#include <cmath>
//#include<iomanip>

using namespace std;

// Iterative Solution
int countDigitIt(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
    //time complexity O(digitCount)
}

// Recursive Solution
int countDigitRec(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigitRec(n / 10);
}

// Logarithemic Solution
int countDigitLog(long n)
{
    return floor(log10(n) + 1);
   //time complexity O(1)
}

int main()
{
    long n = 5545;
    cout << countDigitIt(n) << endl;
    cout << countDigitLog(n) << endl;
    cout << countDigitRec(n) << endl;
}