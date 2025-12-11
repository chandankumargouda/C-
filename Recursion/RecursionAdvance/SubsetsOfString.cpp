#include<iostream>
#include<string>
using namespace std;//leetcode 78
void printsub(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    printsub(ans+ch,original.substr(1));
    printsub(ans,original.substr(1));
}    
// void printsub2(string ans,string original,int idx){
//     if(original.length()==idx){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[idx];
//     printsub2(ans+ch,original,idx+1);
//     printsub2(ans,original,idx+1);
// } 
int main(){
    string str="abc";
    printsub("",str);
    //printsub2("",str,0);
    return 0;
}