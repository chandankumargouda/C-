#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter A Number:";
    cin>>x;
    if(x%2==0){
        cout<<"The Number is Even.";
    }else{
        cout<<"The Number is Odd.";
    }
    return 0;
}