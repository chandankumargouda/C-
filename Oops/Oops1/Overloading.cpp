#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<a+10<<endl;
}
int main(){
    add(12,14);
    add(12);
}