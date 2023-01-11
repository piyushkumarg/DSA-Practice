#include<iostream>
using namespace std;

//naive method
bool isPrime(int n){
    if(n==1)    return false;

    for(int i=2;i<n;i++)
        if(n%i==0)  return false;

    return true;
    
     //time complexity O(n)
}

//Efficient method
bool isPrime1(int n){
    if(n==1)    return false;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)  return false;

    return true;

    //time complexity O(sqrt(n))
}

//More Efficient method (3 times faster than above sqrt method)
/*
Idea: By Checking N%2 == 0 and N%3 == 0,
      We can save many itration for large n
*/
bool isPrime2(int n){
    if(n==1)    return false;

    if(n==2 || n==3) return true;

    if(n%2==0 || n%3 == 0)   return false;
    /*
    n <= 1031
    Note 35 * 35 = 1225 which is more than 1031
    */
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0 || n%(i+2)==0)  return false;

    return true;
    
}

int main(){
    int n=7;
    if(isPrime2(n)) cout<<"Yes";
    else cout<<"No";
   
}