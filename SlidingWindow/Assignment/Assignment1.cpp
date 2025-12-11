#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,2,2,5,5,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int threshold=4;
    int sum=0;
    int avgcount=0;
    int avg=0;
    for(int i=0;i<k;i++) sum+=arr[i];
    avg=sum/k;
    if(avg>=threshold) avgcount++;
    int i=k;
    while(i<n){
        sum-=arr[i-k];
        sum+=arr[i];
        avg=sum/k;
        if(avg>=threshold) avgcount++;
        i++;
    }
    cout<<avgcount;
}