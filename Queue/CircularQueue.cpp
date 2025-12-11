#include<iostream>
#include<vector>
using namespace std;
class Cqueue{
    public:
    int f,b,s;
    int c;
    vector<int>arr;
    Cqueue(int k){//k is capacity
        f=0;
        b=0;
        s=0;
        c=k;
        vector<int>v(k);
        arr=v;
    }
    void push(int val){
        if(s==c) return ;
        arr[b]=val;
        b++;
        if(b==c) b=0;
        s++;
    }
    void pop(){
        if(s==0) return;
        f++;
        if(f==c) f=0;
        s--;      
    }
    int front(){
        if(s==0) return -1;
        return arr[f];
    }
    int back(){
        if(s==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    void size(){
        cout<<b-f<<endl;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Cqueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.size();
    q.pop();
    q.size();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}