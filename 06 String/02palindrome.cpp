#include <iostream>
using namespace std;

// function to change character in lower case.
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s <= e)
    {
        if (toLowerCase(str[s++]) != toLowerCase(str[e--]))
            return false;
    }
    return true;
}

int main()
{
    string s = "Noon";
    cout << isPalindrome(s);
    return 0;
}