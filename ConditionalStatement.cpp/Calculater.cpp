#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter The FIrst Number:";
    cin>>x;
    cout<<"Enter The Second Number:";
    cin>>y;
    char ch;
    cout<<"Enter A Caracter:";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"Sumation of "<<x<<" & "<<y<<" is :"<<x+y;
        break;
        case '-':
        cout<<"Difference of "<<x<<" & "<<y<<" is :"<<x-y;
        break;
         case '*':
        cout<<"Multiple of "<<x<<" & "<<y<<" is :"<<x*y;
        break;
        case '/':
        cout<<"Division of "<<x<<" & "<<y<<" is :"<<x/y;
        break;
        default:
        cout<<"Invalid Caracter";
    }
    return 0;
}