#include<iostream>
using namespace std;
int main(){
    int arr[]={10,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=100;
    int count=0;
    int product=1;
    int i=0;
    int j=0;
     while(j<n){
        product*=arr[j];
        while(product>=k){
            count+=(j-i);
            i++;
        }
        j++;
     }
     while(i<n){
        count+=(j-i);
        product/=arr[i];
        i++;
     }
     cout<<count;
}