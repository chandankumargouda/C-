#include<iostream>
#include<string>
using namespace std;
int main(){
   string str="aabbcddeffghhijjkll";
   int count=0;
   int n=str.length();
   for(int i=0;i<=n-1;i++){
    if(n==1) break;
    if(i==0){
        if(str[i]!=str[i+1]) count++;
    }
    else if(i==n-1){
        if(str[i]!=str[i-1]) count++;
    }
    else if(str[i]!=str[i+1]) count++;
   }
    cout<<count;
    return 0;
}