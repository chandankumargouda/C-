#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> result;
void display(vector<vector<int>>&result){
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            if(result[i][j]!=NULL){
                cout<<result[i][j]<<" ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void f(vector<int>&cand,int target,int idx,vector<int>subset){
    if(target==0){
        //we found a subset which sum is equal to target
        result.push_back(subset);
        return;
    }
    if(idx==cand.size()) return;
    if(cand[idx]<=target){
        subset.push_back(cand[idx]);
        f(cand,target-cand[idx],idx+1,subset);
        subset.pop_back();
    }
    f(cand,target,idx+1,subset);
}
void combSum(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    vector<int>subset;
    result.clear();
    f(arr,target,0,subset);
    display(result);
}
int main(){
    vector<int>arr={10,1,2,7,6,1,5,8};
    int target=8;
    combSum(arr,target);
    return 0;
}