#include<iostream>
#include<climits>
using namespace std;
int main(){
     int arr[]={4,6,7,2,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
    for(int j=i;j<n;j++){
        if(min>arr[j]){
        min=arr[j];
        mindx=j;
        }
    }
    int temp=arr[i];
        arr[i]=arr[mindx];
        arr[mindx]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}//not stability
//Time Complexity
//Best Case=O(n^2)
//Average Case=O(n^2)
//Worst Case=O(n^2)
//Bubble sORT IS A sTABLE sORT