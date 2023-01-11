#include <iostream>
#include <cmath>

using namespace std;

// Iterative Solution(cosiderd better) 
long long factorial(int n)
{
    long long fac =1;
    for(int i=2;i<=n;i++){
        fac*=i;
    }
    return fac;
    //time complexity O(n)
    // Auxiliary Space : O(1)
}

// Recursive Solution
long long factorialRec(long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n*factorialRec(n-1);
    //time complexity O(digitCount)
    // Auxiliary Space : O(n)
}


int main()
{
    long n = 5;
    cout<<factorial(n)<<endl;
    cout<<factorialRec(n)<<endl;
    
}