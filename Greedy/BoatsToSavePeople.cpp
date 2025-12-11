#include<bits/stdc++.h>
using namespace std;
int boatsSavePeople(vector<int> &arr,int w){
    int boat=0;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<=j){
        int sum=arr[j]+arr[i];
        if(sum>w){
            j--;
            boat++;
        }else{
            i++;
            j--;
            boat++;
        }
    }
    return boat;
}
int main(){
    vector<int>arr={3,2,2,1};
    int w=3;
    cout<<boatsSavePeople(arr,w);
    return 0;
}