#include<iostream>
using namespace std;//leetcode=41
int main(){
int arr[]={5,1,-1,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(arr[i]<=0 || arr[i]>n || arr[correctidx]==i+1) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
        }
    }
    return 0;
}