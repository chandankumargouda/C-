#include<iostream>
using namespace std;
//Recursive solution
int power(int a,int b){
    if(b==0)return 1;
    return a*power(a,b-1);
}
//iterative solution
int pow(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
int main(){
   cout<<power(2,3);
}
//Space Complexity=O(n)Form Stack