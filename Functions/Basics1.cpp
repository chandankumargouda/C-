#include<iostream>
using namespace std;
void star(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
    cout<<"*";
    } 
    cout<<endl;   
    }
}
int main(){
    star(3);//Function Calling
    star(4);
    star(5);
    star(6);
    return 0;
}