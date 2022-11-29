#include <iostream>
using namespace std;

/*
when n = 4 pattern,
   1
   2 2
   3 3 3
   4 4 4 4

*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        /*
        when n = 4 pattern,
                  1
                2 2
              3 3 3
            4 4 4 4
        */

        // int spaces = 1;
        // while (spaces < n - row + 1)
        // {
        //     cout << "  ";
        //     spaces++;
        // }

        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
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