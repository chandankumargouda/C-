#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Odd Number Of Rows :";
    cin>>n;
    if(n%2!=0){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i || j==n+1-i){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
    }else{
        cout<<"Please Enter A Odd Number Of Rowes.";
    }
    return 0;
}