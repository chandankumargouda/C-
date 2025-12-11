#include<iostream>
#include<unordered_map>
using namespace std;
int freq(string str,char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch) count++;
    }
    return count;
}
int main(){
    string s="abbcccd";
    string t="dbbccca";
    if(s.length()!=t.length()) return 0;
    unordered_map<char,int>map1;//<key,value>
    // for(int i=0;i<s.length();i++){
    //     char str=s[i];
    //     map1[str]=freq(s,str);
    // }
    for(int i=0;i<s.length();i++){
        map1[s[i]]++;
    }
    unordered_map<char,int>map2;//<key,value>
    for(int i=0;i<t.length();i++){
        char str=t[i];
        map2[str]=freq(t,str);
    }
    // if(map1==map2){
    //     cout<<"It is Anagram.";
    // }else{
    //     cout<<"It isn't Anagram";
    // }
    for(int i=0;i<t.length();i++){
        char ch=t[i];
        if(map1.find(ch)!=map1.end()){
            map1[ch]--;
            if(map1[ch]==0) map1.erase(ch);
        }
        else {
            cout<<"False";
        }
        if(map1.size()>0) cout<<"False";
        cout<<"True";
    }
}