#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        //spaces
        int a=1;
        for(int j=1;j<=nsp;j++){
            cout<<a;
            a++;
        }
       nsp--;
        for(int k=1;k<=nst;k++){
            cout<<" ";
            a++;
        }
       nst+=2;
       for(int j=1+n;j<=2*n-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}