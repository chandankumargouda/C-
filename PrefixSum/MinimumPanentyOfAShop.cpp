#include<iostream>
using namespace std;//leetcode=2483
int main(){
    string str={'Y','N','Y','Y'};
    int n=str.length();
    int pre[n+1];
    int suf[n+1];
     pre[0]=0;
    for(int i=0;i<n;i++){
        int count=0;
        if(str[i]=='N') count++;
        pre[i+1]=pre[i]+count;
    }
     suf[n]=0;
    for(int i=n-1;i>=0;i--){
        int count=0;
        if(str[i]=='Y') count++;
        suf[i]=suf[i+1]+count;
    }
    int minPen=n;
    for(int i=0;i<n+1;i++){
        pre[i]+=suf[i];
        int pen=pre[i];
        minPen=min(minPen,pen);
    }
    cout<<minPen;
    return 0;
}