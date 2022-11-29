#include <iostream>
using namespace std;

/*
when n = 4 pattern,
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1

*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
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