#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter The Base :";
    cin>>a;
    int b;
    cout<<"Enter The Exponential :";
    cin>>b;
    bool flag=true;
    if(b<0){
         flag=false;
         b=-b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
    power=power*a;
    }if(flag==false){
        power=1/power;
        b=-b;
    }
    cout<<a<<" raise to the power "<<b<<":"<<power;
    
    return 0;
}