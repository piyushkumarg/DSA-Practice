#include <iostream>
using namespace std;

/*
Given a string 'str' of words we need to raplace all spaces between words with "@40"
Example:
Input: "Hello World"
Output: Hello@40World
*/

string replaceSpaces(string &str)
{
    // Write your code here.
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.erase(i, 1);
            str.insert(i, "@40");
        }
    }
    return str;
}

int main()
{
    string s = "I love Coding";
    cout << replaceSpaces(s);
    return 0;
}