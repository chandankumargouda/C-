#include<iostream>
using namespace std;
void fibo1(int n){//tc=O(n)
    int a=0,b=1,c;
    for(int i=0;i<=n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}
int fibo2(int n){
    if(n==1||n==2)return 1;
    return fibo2(n-1)+fibo2(n-2);
}
int main(){
    fibo1(10);
    cout<<endl;
    cout<<fibo2(10);
}
