#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    cout<<"Factorial Of :"<<i<<"->"<<factorial;
    cout<<endl;
    }
    return 0;
}