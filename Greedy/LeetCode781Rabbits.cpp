#include<bits/stdc++.h>
using namespace std;
int countNoRabbit(vector<int> &arr){
    unordered_map<int,int>map;
    int result=0;
    for(int i=0;i<arr.size();i++){
        if(!map[arr[i]+1]){
            result+=arr[i]+1;
            if(arr[i]==0) continue;
            map[arr[i]+1]=1;
        }else{
            map[arr[i]+1]++;
            int key=arr[i]+1;
            int val=map[key];
            if(key==val){
                map.erase(key);
            }
        }
    }
    return result;
}
int main(){
    vector<int>arr={5,5,5,5,5,5};
    cout<<countNoRabbit(arr);
    return 0;
}