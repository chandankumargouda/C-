#include<iostream>
using namespace std;
int last(int n){
    cout<<"Last is :"<<n%10<<endl;
}
int first(int n){
    while(n>10){
        n=n/10;
    }
    cout<<"First is :"<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    first(n);
    last(n);
    return 0;
}