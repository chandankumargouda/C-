#include<bits/stdc++.h>
using namespace std;//TC=O(nklogk)&&SC=O(nk)
int main(){
    vector<string>arr={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>map;
    int n=arr.size();
    for(string str:arr){
         string lexo=str;
         sort(lexo.begin(),lexo.end());
         if(map.find(lexo)==map.end()){
            vector<string>v;
            v.push_back(str);
            map[lexo]=v;
         }else{
            map[lexo].push_back(str);
         }
    }
    for(auto x:map){
        vector<string>v={x.second};
        ans.push_back(v);
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n-1;j++){
            cout<<arr[i][j];
       }
       cout<<" ";
    }
}