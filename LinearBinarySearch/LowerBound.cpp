#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int high=n-1,low=0;
    int x=10;
    // for(int i=0;i<n;i++){//Timr complexity=O(n)
    //     if(arr[i]>x){
    //         cout<<"Lower Bound is:"<<arr[i-1]<<endl;
    //         cout<<"Upper Bound is:"<<arr[i];
    //         break;
    //     }
    // }
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x) {
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) low=mid+1;
        else if(arr[mid]>x) high=mid-1;
    }
    if(flag==false)cout<<arr[high]<<endl;
    if(flag==false)cout<<arr[low];
}