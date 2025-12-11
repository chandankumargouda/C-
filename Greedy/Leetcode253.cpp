#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    vector<int>start;
    vector<int>end;
    for(int i=0;i<arr.size();i++){
        start.push_back(arr[i][0]);
        end.push_back(arr[0][i]);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    int i=0,j=0;
    int ans=0;
    int room=0;
    while(i<start.size() && j<end.size()){
        if(start[i]<end[j]){
            i++;
            room++;
            ans=max(ans,room);
        }else if(start[i]==end[j]){
            i++;
            j++;
        }else{
            j++;
            room--;
        }
    }
    cout<<ans;
}