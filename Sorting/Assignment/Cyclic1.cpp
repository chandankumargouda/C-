#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    vector<int>v;
    int i=0;
    while(i<n){
        int correctidx=arr[i];
        if(i+1==correctidx) i++;
        else if(arr[i]==arr[correctidx]) {
            v.push_back(arr[i]);
            break;
        }
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            v.push_back(i+1);
        }
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}