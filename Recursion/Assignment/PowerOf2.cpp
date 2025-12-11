#include<iostream>
using namespace std;
void powerof2(int n){
    if(n==0) cout<<"It is a power of 2 number";
    if(n==1) cout<< "It is not a power of 2 number";
    powerof2(n-2);
}
int main(){
    powerof2(109);
}