#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}