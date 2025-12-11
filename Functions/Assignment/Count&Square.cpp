#include<iostream>
using namespace std;
int square(int n){
    cout<<n*n<<endl;
}
void count(int n){
    int a=n;
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<"1";
   else cout<<count;
}
int main(){
     int n;
    cout<<"Enter N :";
    cin>>n;
    square(n);
    count(n);
}