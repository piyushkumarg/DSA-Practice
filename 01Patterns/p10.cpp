#include <iostream>
using namespace std;

/*
when n = 3 pattern,
   A A A
   B B B
   C C C

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
        while (col <= n)
        {
            cout << char(65 + row - 1) << " ";
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