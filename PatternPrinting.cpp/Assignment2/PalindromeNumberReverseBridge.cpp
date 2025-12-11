#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Lines :";
    cin>>n;
     for(int i=1;i<=n;i++){
            cout<<i;
     }
        for(int q=n-1;q>=1;q--){
        cout<<q;
    }
     
     cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
       for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        } 
    for(int q=n-i;q>=1;q--){
        cout<<q;
    }
       cout<<endl;
    }
    return 0;
}