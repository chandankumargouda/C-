#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int high=n-1,low=0;
    bool flag=false;
   while(low<=high){//for first occurrence
     int mid=low+(high-low)/2;
    if(arr[mid]==target){ 
       if(arr[mid]!=arr[mid-1]){
        flag=true; 
        cout<<mid;
        break;
       }else{
        high=mid-1;
       }
    }
    // while(low<=high){//for last occurrence
    //  int mid=low+(high-low)/2;
    // if(arr[mid]==target){ 
    //    if(arr[mid]!=arr[mid+1]){
    //     flag=true; 
    //     cout<<mid;
    //     break;
    //    }else{
    //     low=mid+1;
    //    }
    // }
    else if(arr[mid]<target) low=mid+1;
    else if(arr[mid]>target) high=mid-1;
    }
    if(flag==false)cout<<-1;
}