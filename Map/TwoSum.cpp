#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,5,3,7,11,6,4};
    int target=9;
    vector<int>ans;
    unordered_map<int,int>map;
    for(int i=0;i<arr.size();i++){
        int rem=target-arr[i];
        if(map.find(rem)!=map.end()){
            ans.push_back(i);
            ans.push_back(map[rem]);
        }else map[arr[i]]=i;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}