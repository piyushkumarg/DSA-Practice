#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "counting from 1 to " << n << " is:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    int sum = 0;
    cout << "\nSum = ";
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}