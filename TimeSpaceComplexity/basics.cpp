#include<iostream>
using namespace std;
int main(){
    int c=0;
    for(int i=0;i<=n;i*=i){//tc=O(log(n)) 
        for(int j=n;j>=0;j--){//tc=O(n) n+1
            c++;//tc=O(nlog(n))
        }
    }

    int c=0;
    for(int i=0;i+i<=n;i*=2){//2^x=sqrt(n) apply gp
        for(int j=0;j<i;j++){
            c++;//tc=O(2^x)=O(sqrt(n))
        }
    }

    int c=0;
    for(int i=0;i*i<=n;i+=2){//2^x=sqrt(n) apply gp x=log(sqrt(n))
        for(int j=n;j>i;j--){//n(x+1)
            c++;//tc=O(nlog(sqrt(n)))=O(nlog(n))
        }
    }

    int c=0;
    for(int i=0;i+i<=n;i*=2){//2^x=sqrt(n) apply gp
        for(int j=0;j<i;j++){
            c++;//tc=O(2^x)=O(sqrt(n))
        }
    }
    
    int c=0;
    for(int i=2;i<=n;i*=i){
       c++;//tc=O(log(log(n)))
    }
} 