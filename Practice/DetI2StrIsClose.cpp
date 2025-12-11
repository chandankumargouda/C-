#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="cabbba";
    string str2="abbccc";
    if(str1.length()!=str2.length()){
        cout<<false;
        return 0;
    }
    unordered_map<char,int>map1;
    unordered_map<char,int>map2;
    // for(char x:str1){
    //     map1[x]++;
    // }
    // for(char x:str2){
    //     map2[x]++;
    // }
    for(int i=0;i<str1.length();i++){
        map1[str1[i]]++;
        map2[str2[i]]++;
    }
    for(auto x:map1){
        char ch=x.first;
        if(map2.find(ch)==map2.end()){
            cout<<false;
            return 0;
        }
    }
    unordered_map<int,int>hp1,hp2;
    for(auto x:map1){
        int freq=x.second;
        hp1[freq]++;
    }
    for(auto x:map2){
        int freq=x.second;
        hp2[freq]++;
    }
    //comparing hp1 & hp2
    for(auto x:hp1){
        int key=x.first;
        if(hp2.find(key)==hp2.end()){
            cout<<false;
            return 0;
        }
        if(hp2[key]!=hp1[key]){
            cout<<false;
            return 0;
        }
    }
    cout<<true;
}