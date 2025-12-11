#include<iostream>
using namespace std;//leetcode=1052
int main(){
    int arr[]={1,0,1,2,1,1,1,7,5};
    int Grumpy[]={0,1,0,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(Grumpy)/sizeof(Grumpy[0]);
    int k=3;
    int maxLoss=0;
    int prevLoss=0;
    for(int i=0;i<=k;i++){
       if(Grumpy[i]==1){
         prevLoss+=arr[i];
       }
    }
    int maxidx=-1;
    maxLoss=prevLoss;
    int i=1;
    int j=k;
    while(j<n){ 
        int curLoss=prevLoss;
        if(Grumpy[i]==1) curLoss+=arr[j];
        if(Grumpy[i-1]==1) curLoss-=arr[i-1];
        if(maxLoss<curLoss){
            maxLoss=curLoss;
            maxidx=i;
        }
    i++;
    j++;
    prevLoss=curLoss;
    }
   //filling 0s in the grumpy array window
   for(int i=maxidx;i<maxidx+k;i++){
        Grumpy[i]=0;
   } 
   //sum of satisfaction
   int sum=0;
   for(i=0;i<n;i++){
    if(Grumpy[i]==0) sum+=arr[i];
   }
   cout<<sum;
   return 0;
}