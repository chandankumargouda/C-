#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    // int arr1[]={4,5,2,1};
    // int arr2[]={3,10,21};
    // int n=sizeof(arr1)/sizeof(arr1[0]);
    // int m=sizeof(arr2)/sizeof(arr2[0]);
    vector<int>arr1;
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(2);
    arr1.push_back(1);
    vector<int>arr2;
    arr2.push_back(3);
    arr2.push_back(10);
    arr2.push_back(21);
    arr2.push_back(7);

    int n=arr1.size();
    int m=arr2.size();

    vector<int>ans(n);
    sort(arr1.begin(),arr1.end());
    for(int i=1;i<n;i++){
        arr1[i]+=arr1[i-1];
    }
    for(int i=0;i<m;i++){
        int len=0;
        for(int j=0;j<n;j++){
            if(arr1[j]>arr2[i]) break;
            len++;
        }
        ans[i]=len;
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}