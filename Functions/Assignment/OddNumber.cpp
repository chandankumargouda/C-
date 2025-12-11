#include <iostream>
using namespace std;
int odd(int a,int b) {
  if(a%2!=0) cout<<a<<" is a Odd Number .";
   if(b%2!=0) cout<<b<<" is a Odd Number .";
}
int main() {
    int a;
    cout<<"Enter a :";
    cin>>a;
    int b;
    cout<<"Enter b :";
    cin>>b;
    odd(a,b);
return 0;
}