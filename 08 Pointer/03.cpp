#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "\nbefore " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    // copying a pointer
    int *q = p;
    cout << endl
         << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << endl
         << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    return 0;
}