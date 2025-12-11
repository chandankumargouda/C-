#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}