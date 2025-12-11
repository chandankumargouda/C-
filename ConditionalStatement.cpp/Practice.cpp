#include<iostream>
using namespace std;
int main(){
    int x;
    x=5>8 ?10 :1!=2<5 ?20:30;//nested ternary//right to left
    cout<<"Value of x:"<<x;
    return 0;
}