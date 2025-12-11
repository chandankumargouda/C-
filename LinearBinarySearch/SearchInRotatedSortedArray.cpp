#include<iostream>
using namespace std;//leetcode=33
int main(){
    int arr[]={6,8,20,28,33,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int pivot=-1;
    int target=20;
    if(n==2){
        if(target==arr[0]) return 0;
        else if(target==arr[1]) return 1;
        else return -1;
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            pivot=mid+1;
            break;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            pivot=mid;
            break;
        }
        else if(arr[mid]<arr[high]) high=mid-1;
        else if(arr[mid]>arr[high])  low=mid+1;
    }
    if(pivot==-1){
        low=0;
        high=n-1;
        while(low<=high){
        int mid=low+(high-low)/2;
         if(arr[mid]==target){ 
        cout<<mid;
        break;
    }
    else if(arr[mid]<target)high=mid-1;
    else low=mid+1;
    }
    }
    if(target>=arr[low]  && target<=arr[pivot-1]){
        low=0;
        high=pivot-1;
        while(low<=high){
        int mid=low+(high-low)/2;
         if(arr[mid]==target){ 
        cout<<mid;
        break;
    }
    else if(arr[mid]<target) high=mid-1;
    else low=mid+1;
    }
    }
    else if(target>=arr[pivot]  && target<=arr[high]){
        low=pivot;
        high=n-1;
        while(low<=high){
        int mid=low+(high-low)/2;
         if(arr[mid]==target){ 
        cout<<mid;
        break;
    }
    else if(arr[mid]>target) high=mid-1;
    else  low=mid+1;
    }
    }
    return 0;
}