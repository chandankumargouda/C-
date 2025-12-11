#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={4,3,2,7,8,2,3,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(correctidx==i) i++;
        else if(arr[i]==arr[correctidx]){
            v.push_back(arr[i]);
            i++;
        }
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}