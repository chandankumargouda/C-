#include<iostream>
using namespace std;
int main(){
    int i=2*3/4+4/4+8-2+5/8;//2/3=0 integer value
    cout<<i<<endl;
    int p=5,q=10;
    p+=q-=p; //Right to Left ,ternary operator right to left
    cout<<p<<" "<<q;
    return 0;
}