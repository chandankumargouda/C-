#include<iostream>
using namespace std;
// void printmax(int arr[],int size,int idx,int max){
//     if(idx==size){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//     printmax(arr,size,idx+1,max);
// }
int storemax(int arr[],int size,int idx){
    if(idx==size) return INT_MIN;
   return max(arr[idx],storemax(arr,size,idx+1));
}
int main(){
    int arr[]={2,4,6,8,1,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    //printmax(arr,size,0,INT_MIN);
    cout<<storemax(arr,size,0);
}