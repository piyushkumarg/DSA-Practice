#include <iostream>
using namespace std;

/*
when n = 4 pattern,
   1
   2 1
   3 2 1
   4 3 2 1
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
        while (col <= row)
        {
            cout << row - col + 1 << " ";
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