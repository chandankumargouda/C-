 #include<iostream>
 using namespace std;
 int main(){
    int arr1[]={1,4,7,9,10};
    int arr2[]={2,3,5,6,8,11,13,14};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+m];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<n){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    for(int i=0;i<(m+n);i++){
        cout<<arr3[i]<<" ";
    }
 }