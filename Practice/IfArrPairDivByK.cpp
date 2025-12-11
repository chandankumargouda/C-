#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr={1,2,3,4,5,6,7,8,9,11};
    // int k=5;
    vector<int>arr={-1,1,-2,2,-3,3,-4,4};
    int k=3;
    vector<int>mod;
    for(int i=0;i<arr.size();i++){
        int a=((arr[i]%k)+k)%k;
        mod.push_back(a);
    }
    unordered_map<int,int>map;
    for(int x:mod){
        map[x]++;
    }
    if(map[0]%2!=0){
        cout<<false;
        return 0;
    }
    if(map.find(0)!=map.end())map.erase(0);
    for(auto x:map){
        int n=x.first;
        int m=k-n;
        if(map.find(m)==map.end()){
            cout<<false;
            return 0;
        }
        if(map[n]!=map[m]){
            cout<<false;
            return 0;
        }
    }
    cout<<true;
}