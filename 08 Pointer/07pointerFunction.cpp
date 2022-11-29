#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

void update(int *p)
{

    p = p + 1;
    cout << "inside " << p << endl;
    *p = *p + 1;
}

int main()
{
    int value = 5;
    int *p = &value;
    cout << "Calling Print function:\n";
    print(p);
    cout << endl
         << " Before " << *p << endl;
    cout << "After update function Call:\n";
    update(p);
    cout << "After " << *p << endl;

    return 0;
}