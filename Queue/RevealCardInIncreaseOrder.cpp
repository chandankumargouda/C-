#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
void display(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr;
    arr.push_back(17);
    arr.push_back(13);
    arr.push_back(11);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    int n=arr.size();
    vector<int>res(n);
    display(arr);
    sort(arr.begin(),arr.end());
    display(arr);
    queue<int>q;
    for(int i=0;i<arr.size();i++){
        q.push(i);
    }
    for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        q.push(q.front());
        q.pop();
       res[x]=arr[i];
    }
    display(res);
}
