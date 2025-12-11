#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter A Number :";
    cin>>x;
    x%2==0 ? cout<<x<<" "<<"Is A Even." :  cout<<x<<" "<<"Is A Odd.";
    cout<<endl;
    int mark;
    cout<<"Enter The Mark :";
    cin>>mark;
    //condition?statement1:statement2;
    mark>=33 ? cout<<"Pass" : cout<<"Fail";
    return 0;
}