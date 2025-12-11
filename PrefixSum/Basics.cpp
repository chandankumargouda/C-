#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //arr1[0]=arr[0];
    // for(int i=1;i<n;i++){
    //     arr1[i]=arr[i]+arr1[i-1];
    // }
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
}