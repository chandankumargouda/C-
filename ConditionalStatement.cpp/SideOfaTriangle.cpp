#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter The First Side :";
    cin>>a;
    int b;
    cout<<"Enter The Second Side :";
    cin>>b;
    int c;
    cout<<"Enter The Third Side :";
    cin>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"This Are A Valid Triangle Sides:";
    }else{
        cout<<"Invalid Triangle";
    }
    return 0;
}