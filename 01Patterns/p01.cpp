#include <iostream>
using namespace std;

/*
when n = 4 pattern,
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4


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
            cout << j << " ";
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