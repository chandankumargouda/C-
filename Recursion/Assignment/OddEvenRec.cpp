#include<iostream>
using namespace std;
void oddeven(int n){
    if(n==0) cout<<"even";
    if(n==1) cout<< "odd";
    oddeven(n-2);
}
int main(){
    oddeven(101);
}