#include<iostream>
using namespace std;

//Naive solution 
int powerOfN(int a, int n){
    int res =1;
    for(int i=0;i<n;i++){
        res*=a;
    }
    return res;

    //Time complexity O(n)
}

/*
Efficient solution Idea:
Time Complexity O(logn)
power(a,n) =  if n%2==0
                power(a,n/2)*power(a,n/2)
              else
                power(a,n-1)*a
*/
//Recursive function call
int power(int a,int n){
    if(n==0) return 1;

    int temp = power(a,n/2);
    temp = temp*temp;   
    if(n%2==0) return temp;

    else return temp*a;
}

/*
Iterative Power (Binary Exponentiation)
    Every number can be written as sum of power of 2(setbits in binary representation)
    We can traverse through all bits of a number (from LSB to MSB) in O(logn) time
*/
//Time Complexity O(logn)
//Auxiliary Comlexity O(1)

int powerB(int a, int n){
    int res=1;
    while(n>0){
        if(n%2!=0/* or (n&1) */) 
            res = res*a;
        a=a*a;
        n=n/2; //n>>1;
    }
    return res;
}

//optised solution
int powerBOp(int a, int n){
    int res=1;
    while(n>0){
        if(n&1) 
            res = res*a;
        a=a*a;
        n=n>>1;
    }
    return res;
}

int main(){
    int a, n;
    cin>>a>>n;
    cout<<powerOfN(a,n)<<endl;
    cout<<power(a,n)<<endl;
    cout<<powerB(a,n)<<endl;
    cout<<powerBOp(a,n)<<endl;
    return 0;
}