//interview 
#include<iostream>
using namespace std;//leetcode=287
int main(){
    int arr[]={5,1,2,4,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=arr[i];
        if(i==correctidx) i++;
        else if(arr[i]==arr[correctidx]) {
            cout<<arr[i];
            break;
        }
        else swap(arr[i],arr[correctidx]);
    }
    
    // int currentsum=0;
    // int actualsum=0;
    // for(int i=0;i<n;i++){
    //     currentsum+=arr[i];
    // }
    //  for(int i=1;i<n;i++){
    //     actualsum+=i;
    // }
    // int result=currentsum-actualsum;
    // cout<<endl;
    // cout<<result;
    return 0;
}