#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    int reverse=0;
    int lastdigit=0;
    while(n>0){
        reverse*=10;
        lastdigit=n%10;
        reverse+=lastdigit;
        n/=10;
    }
    cout<<reverse;
    return 0;
}