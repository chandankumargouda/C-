#include<iostream>
#include<string>
using namespace std;
void paranthesis(string str,int open,int close,int n){
    if(close==n){
        cout<<str<<endl;
        return;
    }
    if(open<n){
        paranthesis(str+'(',open+1,close,n);
    }
    if(close<open){
        paranthesis(str+')',open,close+1,n);
    }
}
int main(){
    int n=5;
    paranthesis("",0,0,n);
}