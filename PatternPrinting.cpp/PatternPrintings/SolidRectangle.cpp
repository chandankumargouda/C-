#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
     int m;
    cout<<"Enter The Number Of columns :";
    cin>>m;
    if(n==m){//for solidsquare
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    }else{//for solid rectangle
        for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}