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
void quicksort(int arr[],int start,int end){
    if(start>=end) return;
    int pi=partition(arr,start,end);
    quicksort(arr,start,pi-1);
    quicksort(arr,pi+1,end);
}
int main(){
    int arr[]={5,1,8,2,7,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}