#include<iostream>
#include<vector>
using namespace std;//only for unique elements
void subarray(vector<int> v,int arr[],int n,int idx){
    if(idx==n){
       for(int i=0;i<v.size();i++){
         cout<<v[i];
       }
       cout<<endl;
       return;
    }
    subarray(v,arr,n,idx+1);
   if(v.size()==0 || v[v.size()-1]==arr[idx-1]){
     v.push_back(arr[idx] );
    subarray(v,arr,n,idx+1);
   }
   }
int main(){
    vector<int>v;
    int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    subarray(v,arr,n,0);
    // for(int i=0;i<=size-1;i++){
    //     for(int j=i;j<=size-1;j++){
    //        for(int k=i;k<=j;k++){
    //         cout<<arr[k];
    //        }
    //        cout<<endl;
    //     }
    // }
    return 0;
}