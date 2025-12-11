#include<iostream>
using namespace std;
void fun(int n){//Formal Arguement
    if(n==0)return;
    cout<<"Hello Chandan!"<<endl;
    fun(n-1);
}
int main(){
   fun(4);//Actual Arguement,Function Call
}