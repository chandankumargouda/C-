#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<string>str={"ac","dc","zz","ca","cd"};
    int n=str.size();
    unordered_set<string>set;
    for(int i=0;i<n;i++){
        set.insert(str[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        string rev=str[i];
        reverse(rev.begin(),rev.end());
        if(rev==str[i]) continue;
        if(set.find(rev)!=set.end()){
            count++;
            set.erase(str[i]);
        }
    }
    cout<<count;
    //  vector<string>ans;
    //  for(int i=0;i<n-1;i++){
    //      string x=str[i];
    //     for(int j=i+1;j<n;j++){
    //         reverse(x.begin(),x.end());
    //         if(x==str[j]){
    //             ans.push_back(str[i]);
    //         }
    //     }
    //  }
    //  for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    //  }
}