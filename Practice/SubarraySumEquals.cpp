#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,2,4,5,2,8,1,2,7};
    int n=arr.size();
    int k=9;
    vector<int>pre(n,0);
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    unordered_map<int,int>map;
    int count=0;
    for(int i=0;i<n;i++){
        if(pre[i]==k){
            count++;
        }
            int rem=pre[i]-k;
            if(map.find(rem)!=map.end())count+=map[rem];
            map[pre[i]]++;
        }
        for(int i=0;i<n;i++){
            cout<<pre[i]<<" ";
        }
    cout<<count;
}