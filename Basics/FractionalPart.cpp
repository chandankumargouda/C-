#include<iostream>
using namespace std;
int main(){
    float p;
    cin>>p;
    if(p>0){
     cout<<p-(int)p;
    }else{
        float q=p-(int)p;
        cout<<(1+ q);
    }
    return 0;
}