#include <iostream>
using namespace std;

void reverseString(char s[], int n)
{

    int st = 0;
    int e = n - 1;
    while (st <= e)
    {
        swap(s[st++], s[e--]);
    }
}

void print(char s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int n = 5;
    reverseString(s, n);
    print(s, n);

    return 0;
}