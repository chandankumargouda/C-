#include<iostream>
using namespace std;
int gcf(int a,int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%2==0 && b%2==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter a :";
    cin>>a;
     int b;
    cout<<"Enter b :";
    cin>>b;
    cout<<gcf(a,b);
}