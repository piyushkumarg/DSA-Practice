#include <iostream>
using namespace std;

/*
when n = 4 pattern,
         *
       * *
     * * *
   * * * *

*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << "  ";
            space++;
        }

        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        row++;
        cout << endl;
    }
}

int main()
{
    pattern();
    return 0;
}