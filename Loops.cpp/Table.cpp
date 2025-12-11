#include<iostream>
using namespace std;
int main(){
    int table,n;
    cin>>n;
    for(int i=1;i<=10;i++){
         table=n*i;
        cout<< n<<"*"<<i <<"="<<table <<"\n";
    }
    return 0;
}