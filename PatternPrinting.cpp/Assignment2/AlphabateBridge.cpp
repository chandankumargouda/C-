#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
    
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(i+64);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        //spaces
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64);
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
       for(int j=1+n;j<=2*n-i;j++){
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;
    }
}