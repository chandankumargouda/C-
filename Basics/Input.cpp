#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Two Numbers:";
    cin>>x>>y;
    cout<< "x="<<x<<","<<"y="<<y;
    cout<<endl;
    int temp=x;
    x=y;
    y=temp;
   cout<< "x="<<x<<","<<"y="<<y;
   cout<<endl;
   bool p=false;
   bool q=false;
   bool r=true;
   //left to right 
   cout<<(p==q==r)<<endl;
   cout<<(p==q!=r);
    return 0;
}