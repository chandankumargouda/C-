#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int m;
    cout<<"Enter m :";
    cin>>m;
    int* ptr1=&n;
    int* ptr2=&m;
    int product=(*ptr1)*(*ptr2);
    cout<<product;
    return 0;
}