#include<iostream>
using namespace std;

//Naive solution
void printDivisor(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    
    //time complexity O(n)
    //Auxiliary Space: O(1)
}

//Efficient Soltion (not sorted order)
void printDivisor1(int n){
      for(int i =1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i))
                cout<<(n/i)<<" ";
        }
    }

     //time complexity O(sqrt(n))
}

//Efficient Soltion (sorted order)
void printDivisor2(int n){
    int i;
    //print all divisors from 1(inclusive) to sqrt(n)(exclusive)
    for(i =1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

    //print all divisors from sqrt(n)(inclusive) to n (inclusive)
    for( ;i>=1;i--){
        if((n%i)==0)
                cout<<(n/i)<<" ";
    }

     //time complexity O(sqrt(n))
}

int main(){
    
    int n=25;
    printDivisor(n);
    cout<<endl;
    printDivisor1(n);
    cout<<endl;
    printDivisor2(n);
    cout<<endl;
}