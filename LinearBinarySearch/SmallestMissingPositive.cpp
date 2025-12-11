#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,3,4,6,8,9};
    // for(int i=0;i<8;i++){
    //     if(i!=arr[i]) {
    //         cout<<i;
    //         break;
    //         }
    // }
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
    int ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid) low=mid+1;
        else {
            ans=mid;
            high=mid-1;
        } 
    }
    cout<<ans;
    return 0;
}