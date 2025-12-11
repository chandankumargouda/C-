#include<iostream>
#include<string>
#include<vector>
using namespace std;//leetcode 78
void printsub(string ans,string original,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    printsub(ans+ch,original.substr(1),v);
    printsub(ans,original.substr(1),v);
}     
int main(){
    string str="abc";
    vector<string>v;
    printsub("",str,v);
    // for(int i=0;i<=v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    for(string ele:v){
        cout<<ele<<endl;
    }
    return 0;
}