#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="chandan is a good     student";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}