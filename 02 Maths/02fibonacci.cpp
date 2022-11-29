#include <iostream>
using namespace std;

void fibonicci()
{
    int n;
    cout << "Enter numbers of terms of fibonacci series: ";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i < n - 1; i++)
    {
        int nextTerm = a + b;
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
    }
}

int main()
{
    fibonicci();
    return 0;
}