#include <iostream>
using namespace std;

void reverse(string &str, int s, int e)
{
    if (s > e)
        return;

    swap(str[s++], str[e--]);

    reverse(str, s, e);
}

int main()
{
    string str = "abcdefghi";
    cout << "Before -- " << str << endl;
    reverse(str, 0, str.length() - 1);
    cout << "After -- " << str << endl;
    return 0;
}