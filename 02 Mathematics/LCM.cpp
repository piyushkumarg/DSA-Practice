#include<iostream>
using namespace std;

//naive sollution
int lcm(int a, int b){
    int res = max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
     //time complexity O(a*b-max(a,b))
}

//Efficient solution
/*
    a*b  gcd(a,b)*lcm(a,b)
*/
int gcd(int a, int b){
        if(b==0)
            return a;
        else
          return gcd(b,a%b);
}

int lcm1(int a, int b){
    return ((a*b)/gcd(a,b));
}


int main(){
    int a=4, b=6;
    cout<<lcm1(a,b);
}