#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    int ans=pow(a,b/2);
    if(b%2==0) return ans*ans;
    else return ans*ans*a;
}
int main(){
    cout<<pow(3,3);
}//tc=O(log(n)) sc=O(log(n))