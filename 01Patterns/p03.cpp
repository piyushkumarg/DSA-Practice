#include <iostream>
using namespace std;

/*
when n = 3 pattern,
    1 2 3
    4 5 6
    7 8 9
*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count++ << " ";
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