#include<iostream>
using namespace std;
void reverse(int arr[],int index,int size){
     if(index<0) return;
     cout<<arr[index]<<" ";
     reverse(arr,index-1,size);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size-1,size);
}