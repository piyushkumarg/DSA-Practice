#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n==1)    return false;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)  return false;

    return true;
    
}
//Naive solution
void primeUptoN(int n){
    if(n<=1) return;

    for(int i =2; i<=n;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
     //time complexity O(n*sqrt(n))
}

/*********   Sieve Eratosthenes     **********/
void Sieve(int n){
    vector<bool> IsPrime(n+1,true);

    for(int i=2;i*i<=n;i++){
        if(IsPrime[i]){
            for(int j=2*i;j<=n;j=j+i)
                IsPrime[j]=false;
        }
    }

    for(int i=2;i<=n;i++){
        if(IsPrime[i])
            cout<<i<<" ";
    }
}

//optimised solution
void SieveOp(int n){
    vector<bool>IsPrime(n+1,true);

    for(int i=2; i<=n; i++){
        if(IsPrime[i]){
            cout<<i<<" ";
            for(int j= i*i;j<=n;j=j+i)
                IsPrime[j]=false;
        }
    }
} //time complexity O(n(log(logn)))

int main(){
    int n=15;
    primeUptoN(n);
    cout<<endl;
    Sieve(n);
    cout<<endl;
    SieveOp(n);
}