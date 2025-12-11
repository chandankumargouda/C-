#include<iostream>
using namespace std;
// int fact(int n){
//     int Fact=1;
//     for(int i=1;i<=n;i++){
//         Fact*=i;
//     }
//     return Fact;
// }
int fact(int n){
    if(n==1||n==0) return 1;//base case
    int factn=n*fact(n-1);
    return factn;
}
int main(){
    int n=5;
    int f=fact(n);
    cout<<f;
}