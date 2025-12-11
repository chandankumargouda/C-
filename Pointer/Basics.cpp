#include<iostream>
using namespace std;
int main(){
    int x=6;
    cout<<&x<<endl;
    int* p=&x;
    cout<<p<<endl;
    cout<<*p<<endl;
    p=p+1;
    cout<<*p;
    return 0;
} 