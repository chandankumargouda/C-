#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter A Number :";
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<"1";
   else cout<<count;
    return 0;
}