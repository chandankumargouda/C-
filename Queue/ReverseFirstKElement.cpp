#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseK(queue<int>&q,int k){
    stack<int>st;
    for(int i=0;i<k;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    for(int i=0;i<k;i++){
        int x=st.top();
        q.push(x);
        st.pop();
    }
    for(int i=0;i<(q.size())-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    display(que);
    reverseK(que,3);
    display(que);
}