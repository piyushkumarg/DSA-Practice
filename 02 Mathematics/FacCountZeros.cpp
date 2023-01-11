#include <iostream>
#include <cmath>
using namespace std;

//This solution is not applicable foe higher value on n due to overflow 
//(when n= 20 ; number of digit is 19)
int countZero(int n){
    int fac =1;
    for(int i=2;i<=n;i++){
        fac*=i;
    }
    
    int res=0;
    while(fac%10==0){
        res++;
        fac/=10;
    }
    return res;
}

/*
The idea is to consider prime factors of a factorial n. 
A trailing zero is always produced by prime factors 2 and 5. 
If we can count the number of 5s and 2s, our task is done. 
Consider the following examples.
n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5).
 So a count of trailing 0s is 1.
n = 11: There are two 5s and eight 2s in prime factors of 11! (2 8 * 34 * 52 * 7).
 So the count of trailing 0s is 2.
 
We can easily observe that the number of 2s in prime factors 
is always more than or equal to the number of 5s. 
So if we count 5s in prime factors, we are done.

Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
*/

int trailingCountZeros(int n){
    int res =0;
    for(int i=5;i<=n;i=i*5){
        res = res + n/i;
    }
    return res;
}
// Time Complexity: O(log5n)
// Auxiliary Space: O(1)

int main()
{
    int n = 100;
    cout<<trailingCountZeros(n);
   
   
}