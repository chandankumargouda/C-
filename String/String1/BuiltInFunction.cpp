#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    //string str="my name is chandan kumar gouda";
    // int len=str.length();//len.size()
    // cout<<len<<endl;

    // string str="chandan";
    // cout<<str<<endl;
    // str.push_back('k');
    // str.push_back('u');
    // str.push_back('m');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // string str="abcd";
    // cout<<str<<endl;
    // str+="xyz";
    // cout<<str<<endl;
    // str="xyz"+str;
    // cout<<str<<endl;
    string str="chandan";
    cout<<str<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
     reverse(str.begin()+2,str.end()-2);
     cout<<str<<endl;
    return 0;
}