#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&que){
    int n=que.size();
    for(int i=0;i<n;i++){
        int x=que.front();
        cout<<x<<" ";
        que.pop();
        que.push(x);
    }
    cout<<endl;
}
void Reverse(queue<int>&que){
   stack<int>st;
    while(que.size()>0){
        int x=que.front();
        que.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        que.push(x);
    }
}
int main(){
    queue<int>que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    // cout<<que.front()<<endl;
    // cout<<que.back()<<endl;
    // cout<<que.size()<<endl;
    // que.pop();
    // cout<<que.front()<<endl;
    // cout<<que.size()<<endl;
    display(que);
    Reverse(que);
    display(que);
}