#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;//leetcode 242
int main(){
    string str1="chandankumargouda";
    string str2="goudakuarchandan";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2) cout<<"These Two Stnings Are Anagram";
    else cout<<"No It is not anagram";
    return 0;
}