#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,2,3,4,8,2,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(i==correctidx || arr[i]==arr[correctidx]) i++;
        else swap(arr[i],arr[correctidx]);
    }
    vector<int>v;
    for(int i=0;i<n;i++){
       if(arr[i]!=i+1) v.push_back(i+1);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}