#include<bits/stdc++.h>
using namespace std;
bool cnp(vector<int>&i1,vector<int>&i2){
    return i1[0]<i2[0];
}
int main(){
    vector<vector<int>>arr={{1,2},{2,3},{3,4},{1,3}};
    sort(arr.begin(),arr.end(),cnp);
    int ans=0;
    int lastEndTime=arr[0][1];
    for(int i=1;i<arr.size();i++){
        if(arr[i][0]<lastEndTime){
            ans++;
        }else{
            lastEndTime=arr[i][1];
        }
    }
    cout<<arr.size()-ans;
}