 #include<iostream>
 #include<vector>
 using namespace std;//MergeSort is Stable Sort
 void merge(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3){
    int i=0;
    int j=0;
    int k=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr1[i++];
        }else {
            arr3[k++]=arr2[j++];
        }
    }
    if(i==n){
        while(j<m){
            arr3[k++]=arr2[j++];
        }
    }
    if(j==m){
        while(i<n){
            arr3[k++]=arr1[i++];
        }
    }
 }
 void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int>arr1(n1),arr2(n2);
    for(int i=0;i<n1;i++){
        arr1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=v[i+n1];
    }
    mergeSort(arr1);
    mergeSort(arr2);
    merge(arr1,arr2,v);
 }
 int main(){
    int arr[]={5,13,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 }