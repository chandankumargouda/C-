#include<iostream>
using namespace std;
int stair(int n){
    if(n==4)return 8;
   else if(n==3)return 4;
   else if(n==2)return 2;
   else if(n==1) return 1;
    return stair(n-1)+stair(n-2)+stair(n-3)+stair(n-4);
}
int main(){
    cout<<stair(5);
    return 0;
}