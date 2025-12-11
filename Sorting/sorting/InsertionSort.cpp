#include<iostream>
#include<climits>
using namespace std;
int main(){
     int arr[]={4,6,7,2,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=0){
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}// stability
//Time Complexity
//Best Case=O(n)
//Average Case=O(n^2)
//Worst Case=O(n^2)
//Bubble sORT IS A sTABLE sORT