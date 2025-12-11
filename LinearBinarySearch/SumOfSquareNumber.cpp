//leetcode 633
#include<iostream>
using namespace std;//leetcode-704
int main(){
    int arr[]={1,2,3,4,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int high=n-1,low=0;
   while(low<=high){
     int mid=(low+high)/2;
    if(arr[mid]==target){ 
        cout<<mid;
        return 0;
    }
    else if(arr[mid]<target) low=mid+1;
    else if(arr[mid]>target) high=mid-1;
    }
    cout<< "Not Present";
}