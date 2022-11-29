#include <iostream>
using namespace std;

/*
when n = 5 pattern,
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
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
            cout << col << " ";
            col++;
        }

        col = 1;
        while (col < row * 2 - 1)
        {
            cout << "* ";
            col++;
        }

        col = n - row + 1;
        while (col >= 1)
        {
            cout << col << " ";
            col--;
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