#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Lines :";
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}