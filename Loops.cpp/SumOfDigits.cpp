#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    int sum=0;
    int a=n,lastdigit;
    while(lastdigit=(a%10)){
    sum+=lastdigit;
    n/=10;
    a=n;
    }
    cout<<sum;
    return 0;
}