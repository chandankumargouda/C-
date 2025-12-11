#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void reOrder(queue<int>&q){
    stack<int>st;
    int n=q.size();
    int mid=(q.size())/2;
    for(int i=0;i<mid;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<mid;i++){
        st.push(q.front());
        q.pop();
    }
   while(st.size()!=0 && q.size()!=n){
            int x=q.front();
            q.push(st.top());
            q.push(x);
            q.pop();
            st.pop();
   }
   while(q.size()!=0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    //display(q);
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reOrder(q);
    display(q);
}