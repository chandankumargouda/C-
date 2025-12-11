#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<"*";
        }
       nsp--;
        for(int k=1;k<=nst;k++){
            cout<<" ";
        }
       nst+=2;
       for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}