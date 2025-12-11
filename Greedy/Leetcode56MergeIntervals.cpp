#include<bits/stdc++.h>
using namespace std;
bool cnp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
int main(){
    vector<vector<int>>arr={{4,8},{3,7},{10,12},{1,5},{2,6}};

    // sort(arr.begin(),arr.end(),cnp);
    // int n=arr.size();
    // vector<vector<int>>ans;
    // ans.push_back(arr[n-1]);
    // for(int i=n-2;i>=0;i--){
    //     vector<int>curr=arr[i];
    //     if(curr[1]>=ans[ans.size()-1][0]){
    //        // curr.end and last.start
    //        ans[ans.size()-1][0]=min(ans[ans.size()-1][0],curr[0]);
    //        ans[ans.size()-1][1]=max(ans[ans.size()-1][1],curr[1]);
    //     }else{
    //         ans.push_back(arr[i]);
    //     }
    // }
    // reverse(ans.begin(),ans.end());

    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>>ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        vector<int>curr=arr[i];
        if(curr[0]<=ans[ans.size()-1][1]){
           // curr.end and last.start
           ans[ans.size()-1][0]=min(ans[ans.size()-1][0],curr[0]);
           ans[ans.size()-1][1]=max(ans[ans.size()-1][1],curr[1]);
        }else{
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}