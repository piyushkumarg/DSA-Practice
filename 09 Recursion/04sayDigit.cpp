#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    sayDigit(n, arr);

    cout << digit << " -- " << arr[digit] << endl;
}

void sayDigit1(int n, string arr[])
{

    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    cout << digit << " -- " << arr[digit] << endl;
    // recursive call
    sayDigit(n, arr);
}

int main()
{

    string arr[10] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << "After Calling SayDigit function: \n";
    sayDigit(n, arr);

    cout << "\nAfter Calling SayDigit function: \n";
    sayDigit1(n, arr);
    return 0;
}