#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
             cout<<(char)(k+64);
        }
        for(int k=1;k<=i-1;k++){
             cout<<(char)(k+65);
        }
        cout<<endl;
    }
    return 0;
}