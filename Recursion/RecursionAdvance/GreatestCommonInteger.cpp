#include<iostream>
#include<string>
using namespace std;
int hcf(int n,int m){
     if(n==0)  return m;
     else return hcf(m%n,n);//time complexity=O(log(n+m))
}
// int hcf(int n,int m){
//     for(int i=min(n,m);i>=2;i--){
//         if(n%i==0 && m%i==0) return i;
//     }
//     return 1;//time complexity=O(min(n,m))
// }
int main(){
    int n=45,m=27;
    cout<<hcf(n,m);
    return 0;
}