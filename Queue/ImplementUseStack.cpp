#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
    stack<int>st1;
    stack<int>st2;//helper class
    void push(int val){
        st1.push(val);
    }
    void pop(){
        while(st1.size()>0){
            int x=st1.top();
            st1.pop();
            st2.push(x);
        }
        st2.pop();
        while(st2.size()>0){
            int x=st2.top();
            st2.pop();
            st1.push(x);
        }
    }
    void display(){
        while(st1.size()!=0){
            int x=st1.top();
            st1.pop();
            st2.push(x);
        }
        while(st2.size()!=0){
            int x=st2.top();
            cout<<x<<" ";
            st2.pop();
            st1.push(x);
        }
        cout<<endl;
    }
    int back(){
        return st1.top();
    }
    void front(){
        while(st1.size()!=0){
            int x=st1.top();
            st1.pop();
            st2.push(x);
        }
        cout<<st2.top()<<endl;
        st2.pop();
        while(st2.size()!=0){
            int x=st2.top();
            st2.pop();
            st1.push(x);
        }
    }
    void size(){
        int count=0;
        while(st1.size()!=0){
            int x=st1.top();
            st1.pop();
            st2.push(x);
            count++;
        }
        while(st2.size()!=0){
            int x=st2.top();
            st2.pop();
            st1.push(x);
        }
        cout<<count<<endl;
    }
    bool empty(){
        if(st1.size()==0) return true;
        else return false;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.front();
    cout<<q.back()<<endl;
    q.size();
    q.pop();
    q.size();
    q.display();
    q.front();
    cout<<q.back()<<endl;
}