#include<iostream>
using namespace std;//leetcode-1004
int main(){
    int arr[]={1,0,1,1,1,0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    int maxlen=INT_MIN;
    int flips=0;
    int len=0;
    int i=0;
    int j=0;
    while(j<=n){
        if(arr[j]==1) j++;
        else{//arr[j]==0
            if(flips<k){    
            flips++;
            j++;
            }else{//flips==k
            //i k just uske age wale 0 se ek index age le jao
            len=j-i;
            maxlen=max(maxlen,len);
            while(arr[i]==1)i++;
            i++;
            j++;
            }
        }
        }
            len=j-i;
            maxlen=max(maxlen,len);
        cout<<maxlen-1;
}