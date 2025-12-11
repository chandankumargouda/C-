#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Lines :";
    cin>>n;
    for(int i=n+1;i>=1;i--){
        for(int j=1;j<=n+1;j++){
            if(i==j)cout<<"*";
            else cout<<" ";
        }
        for(int k=1;k<=n+1;k++){
            if(k==n+1-i)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n+1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=n+1;j++){
            if(i==j)cout<<"*";
            else cout<<" ";
        }
        for(int k=1;k<=n+1;k++){
            if(k==n+1-i)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}