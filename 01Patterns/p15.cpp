#include <iostream>
using namespace std;

/*
when n = 4 pattern,
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        while (spaces <= n - row)
        {
            cout << "  ";
            spaces++;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        col = row - 1;
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