#include<iostream>
using namespace std;//leetcode=852
int main(){
    int arr[]={1,3,5,4,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            flag=true;
            cout<<mid;
            break;
        }
        else if(arr[mid]>arr[mid+1]) high=mid-1;
        else if(arr[mid]>arr[mid-1])  low=mid+1;
    }
    if(flag==false) cout<<"No Peak Index Present In the Array.";
    return 0;
}