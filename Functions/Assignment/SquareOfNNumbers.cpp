#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
void firstNSquares(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<"->5"<<square(i)<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter N :";
    cin>>n;
    firstNSquares(n);
    return 0;
}