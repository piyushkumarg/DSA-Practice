#include <iostream>
using namespace std;

void miniCalculator()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    char op;
    cout << "Enter the operation you want to perform: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b;
        break;
    default:
        cout << "Please enter valid operation.";
        break;
    }
}

int main()
{
    miniCalculator();
    return 0;
}