#include <bits/stdc++.h>
using namespace std;

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

string removeSpace(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] >= '0' && s[i] <= '9')
        {
            // to convert all letters to lowercase
            if (s[i] >= 'a' && s[i] <= 'z')
                temp.push_back(s[i]);
            else
                temp.push_back(s[i] - 'A' + 'a');
        }
    }
    return temp;
}

bool isPalindrome(string s)
{
    string str = removeSpace(s);
    int st = 0;
    int e = str.length() - 1;
    while (st <= e)
    {
        if (str[st++] != str[e--])
        {
            return false;
        }
    }
    return true;
}

/****************************** OR *****************************************/
bool isPalindromeModified(string s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st <= e)
    {
        if (!isalnum(s[st]))
        {
            st++;
        }
        else if (!isalnum(s[e]))
        {
            e--;
        }
        else if (tolower(s[st++]) != tolower(s[e--]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << "string is: \n"
         << removeSpace(s) << endl;
    cout << isPalindrome(s) << endl;
    cout << isPalindromeModified(s);
    return 0;
}