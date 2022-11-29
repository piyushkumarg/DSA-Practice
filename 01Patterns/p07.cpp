#include <iostream>
using namespace std;

/*
when n = 4 pattern,
   1
   2 3
   4 5 6
   7 8 9 10

*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count++ << " ";
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