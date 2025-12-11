#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void maxSlidingWindow(vector<int>&arr,int k){
    int n=arr.size();
    int ngi[n];
    stack<int>st;
    ngi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ngi[i]=n;
        else ngi[i]=st.top();
        st.push(i);
    }
    vector<int>ans;
    int j=0;
    for(int i=0;i<n-k+1;i++){
        if(j<i) j=i;
        int mx=arr[i];//starting of window
        while(j<i+k){//means if ngi is inside window
            mx=arr[j];
            if(ngi[j]>=i+k) break;
            j=ngi[j];
        }
        ans.push_back(mx);
    }
    print(ans);
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    print(v);
    maxSlidingWindow(v,4);
}