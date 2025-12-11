#include<iostream>
using namespace std;//not stable tc=O(nlogn) sc=O(logn)
int partition(int arr[],int start,int end){
    int pivotElement=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=count+start;
    swap(arr[start],arr[pivotIdx]);
    int i=start;
    int j=end;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
} 
int  kthSmallest(int arr[],int start,int end,int k){
    int pi=partition(arr,start,end);
    if(pi+1==k) return arr[pi];
    else if(pi+1 <k) return kthSmallest(arr,pi+1,end,k);
    else return kthSmallest(arr,start,pi-1,k);
}
int main(){
    int arr[]={5,12,82,2,7,6,3,42};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=6;
    cout<<kthSmallest(arr,0,n-1,k);
}