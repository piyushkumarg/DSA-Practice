#include<iostream>
using namespace std;

//naive sollution
int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
    //time complexity O(min(a,b))
}

//Efficient solution
/*
Basic Idea
Euclidean Algorithm
let b be smaller than a 
    gcd(a,b)= gcd(a-b,b)

why?
    let 'g' be GCD of 'a' and 'b' 
        a=gx, b=gy and GCD(x,y)=1
        (a-b) = (x-y)
*/

//Basic version of Euclidean Algorithm
int gcd1(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

//Optimised version of Euclidean Algorithm
int gcd2(int a, int b){
        if(b==0)
            return a;
        else
          return gcd2(b,a%b);
}
//time complexity O(log(max(a,b)))

int main(){
    int a=10, b=15;
    cout<<gcd2(a,b);
}