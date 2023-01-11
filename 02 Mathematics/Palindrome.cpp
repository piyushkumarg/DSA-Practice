#include <iostream>
#include <cmath>
//#include<iomanip>

using namespace std;

bool isPalindrome(long n){
    long rev=0;
    long temp =n;
    while(temp!=0){
        int last_digit = temp%10;
        rev = rev*10 + last_digit;
        temp/=10;
    }
    // if(rev == n)
    //     return true;
    // else
    //     return false;
    return (rev==n);

    //time complexity O(digitCount)
}

int main()
{
    long n =345453;
    if(isPalindrome(n)){
        cout<<"Yes"<<endl;
    }
    else    
        cout<<"No"<<endl;
    
}