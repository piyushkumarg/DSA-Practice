#include <iostream>
using namespace std;

/*
when n = 3 pattern,
    9 8 7
    6 5 4
    3 2 1
*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n * n - count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    pattern();
    return 0;
}