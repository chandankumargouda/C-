#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int stUnable(vector<int>&st,vector<int>&sd){
    queue<int>q;
    for(int i=0;i<st.size();i++){
        q.push(st[i]);
    }
    int count=0;
    int i=0;//who traverse the sd
    while(q.size()>0 && count!=q.size()){
        if(q.front()==sd[i]){
            count=0;
            q.pop();
            i++;
        }else{
            q.push(q.front());
            q.pop();
            count++;
        }
    } 
    return count;
}
int main(){
    vector<int>st;
    st.push_back(1);
    st.push_back(1);
    st.push_back(1);
    st.push_back(0);
    st.push_back(0);
    st.push_back(1);
    vector<int>sd;
    sd.push_back(1);
    sd.push_back(0);
    sd.push_back(0);
    sd.push_back(0);
    sd.push_back(1);
    sd.push_back(1);
    cout<<stUnable(st,sd);
}