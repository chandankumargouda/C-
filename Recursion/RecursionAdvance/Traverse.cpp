#include<iostream>
using namespace std;
    void find(int arr[],int size,int idx){
        if(idx==size)return;
        cout<<arr[idx]<<" ";
        find(arr,size,idx+1);
    }
int main(){
    int arr[]={2,4,6,8,1,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    find(arr,size,0);
}