#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int partitionElement=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=partitionElement) count++;
    }
    int pidx=count+start;
    swap(arr[start],arr[pidx]);
    int i=start;
    int j=end;
    while(i<pidx && j>pidx){
        if(arr[i]<=partitionElement) i++;
        if(arr[j]>partitionElement) j--;
        if(arr[i]>partitionElement && arr[j]<partitionElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pidx;
}
void quicksort(int arr[],int start,int end){
    if(start>=end) return;
    int pi=partition(arr,start,end);
    quicksort(arr,start,pi-1);
    quicksort(arr,pi+1,end);
}
int main(){
    int arr[]={5,3,6,8,2,9,2};
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