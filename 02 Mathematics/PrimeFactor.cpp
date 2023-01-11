#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1)    return false;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)  return false;

    return true;
    
}

//naive solution
void primeFactor(int n){
    if(n<=1) return;

    for(int i=2;i<n;i++){
        if(isPrime(i)){
            int x =i;
            while(n%x==0){
                cout<<i<<" ";
                x*=i;
            }
        }
    }

    //time complexity O((n^2)(logn))
}

//efficient soltion
void primeFactor1(int n){
    if(n<=1) return;

    for(int i=2;i*i<=n;i++){
       while(n%i==0){
           cout<<i<<" ";
           n/=i;
       }
    }

    if(n>1) cout<<n<<" ";
}

//more efficient solution
void primeFactor2(int n){
    if(n<=1) return;

    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }

    while(n%3==0){
        cout<<3<<" ";
        n/=3;
    }

    for(int i=5;i*i<=n;i=i+6){
       while(n%i==0){
           cout<<i<<" ";
           n/=i;
       }
       while(n%(i+2)==0){
           cout<<(i+2)<<" ";
           n/=(i+2);
       }
    }

    if(n>3) cout<<n<<" ";

     //time complexity O(sqrt(n))
}
int main(){
    
    int n=84;
    primeFactor(n);
    cout<<endl;
    primeFactor1(n);
    cout<<endl;
    primeFactor2(n);
    cout<<endl;
}