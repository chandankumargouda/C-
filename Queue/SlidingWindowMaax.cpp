#include<iostream>
#include<vector>
#include<deque>
using namespace std;
void display(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
void winMax(vector<int>& nums,int k){
    int n=nums.size();
    if(k==1) cout<<nums[0];
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<n;i++){
        while(dq.size()>0 && nums[i]>nums[dq.back()])
        dq.pop_back();
        dq.push_back(i);
        int j=i-k+1;
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1) ans.push_back(nums[dq.front()]);
    }
    display(ans);
}
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(-1);
    nums.push_back(-3);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(7);
    display(nums);
    winMax(nums,3);
}