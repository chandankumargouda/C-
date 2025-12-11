#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,5,6,2,5,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
   if(idx!=-1) cout<<"Yes it can be partitioned"<<idx;
   else cout<<"Yes it can't be partitioned";
}