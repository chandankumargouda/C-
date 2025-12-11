#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;
void canSeePesonCount(vector<int>&arr){
   int n=arr.size();
   vector<int>ans(n,0);
   stack<int>st;
   st.push(arr[n-1]);
   ans[n-1]=0;
   for(int i=n-2;i>=0;i--){
    int count=0;
    //pop with count
    while(st.size()>0 && arr[i]>st.top()){
        st.pop();
        count++;
    }
    if(st.size()!=0) count++;
    ans[i]=count;
    st.push(arr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(11);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    canSeePesonCount(v);
}