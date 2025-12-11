//leetcode=658
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int k=4;
    vector<int> ans[k];
    if(x<arr[0]){
        for(int i=0;i<n;i++){
            ans[i]=arr[i];
        }
        return ans;
    }
    //1 2 3 4 5 x=7 k=3 0054
    if(x>arr[n-1]){
        int i=n-1;
        int j=k-1;
        while(j>=0){
            ans[i]=arr[i];
            j--;
            i--;
        }
        return ans;
    }
    int mid=-1;
    int high=n-1,low=0;
    bool flag=false;//if x is not present in or not
    int t=0;//representing 
   while(low<=high){
      mid=(low+high)/2;
    if(arr[mid]==x){ 
        flag=true;//present index of ans
        ans[t]=arr[mid];
        t++;
        break;
    }
    else if(arr[mid]>x) high=mid-1;
    else  low=mid+1;
    }
    int lb=high;
    int ub=low;
    if(flag==true){
        lb=mid-1;
        ub=mid+1;
    }
    while(t<k && lb>=0 && ub<=n-1){
        int d1=abs(x-arr[lb]);
        int d2=abs(x-arr[ub]);
        if(d1<=d2){
            ans[t]=arr[lb];
            t++;
            lb--;
        }else{
            ans[t]=arr[ub];
            t++;
            ub++;
        }
    }
    if(lb<0){
        while(t<k){
            ans[t]=arr[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1){
        while(t<k){
            ans[t]=arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}