#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Rows :";
    cin>>n;
     int m;
    cout<<"Enter The Number Of columns :";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}