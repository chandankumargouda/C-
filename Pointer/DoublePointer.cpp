#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* ptr=&x;
    int** ptr2=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2; 
    return 0;
}