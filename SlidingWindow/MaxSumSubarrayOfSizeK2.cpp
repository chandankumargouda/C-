#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum=INT_MIN;
    int maxidx=-1;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxSum=prevSum;
    //sliding window
    int i=1;
    int j=k;
    while(j<n){
        int curSum=prevSum+arr[j]-arr[i-1];
        if(curSum>maxSum){
            maxSum=curSum;
            maxidx=i;
        }
        i++;
        j++;
        prevSum=curSum;
    }
    cout<<maxSum<<endl;
    cout<<maxidx;
    return 0;
}