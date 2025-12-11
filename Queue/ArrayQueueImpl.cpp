#include<iostream>
using namespace std;
class queue{
    public:
    int arr[6];
    int n=sizeof(arr)/sizeof(arr[0]);
    int f=0;
    int b=0;
    void push(int val){
        if(b==n){
            cout<<"Queue is full";
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(b-f==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    void size(){
        cout<<b-f<<endl;
    }
    bool empty(){
        if(f-b==0) return true;
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
    queue q;
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