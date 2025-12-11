#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    while(k>0){
        int min=q.top();
        if(min==0){
            break;
        }else{
            q.pop();
            q.push(-1*min);
        }
        k--;
    }
    int sum=0;
    while(q.size()>0){
        int p=q.top();
        sum+=p;
        q.pop();
    }
    cout<<sum;
}