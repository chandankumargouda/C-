#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter The Character:";
    cin>>ch;
    int ASCII=(int)ch;
    if(ASCII>=65 && ASCII<=90 || ASCII>=97 &&  ASCII<=122){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"This Character Is A vowels.";
        }else{
            cout<<"This Character Is A Consonent";
        }
    }else{
        cout<<"Character Is Not A Alphabate";
    }
    return 0;
}