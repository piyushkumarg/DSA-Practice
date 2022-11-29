#include <iostream>
using namespace std;

/*
when n = 4 pattern,
   * * * *
   * * *
   * *
   *
*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
}

int main()
{
    pattern();
    return 0;
}