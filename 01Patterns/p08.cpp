#include <iostream>
using namespace std;

/*
when n = 4 pattern,
  1
  2 3
  3 4 5
  4 5 6 7

*/

void pattern()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int count = row;
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

void pattern1()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = row;
        while (col < row * 2)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

int main()
{
    // pattern();
    pattern1();
    return 0;
}