#include<iostream>
using namespace std;
class Node{//DLL node
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;//extra for DLL
    }
};
class dequeue{//user define data pointer
 public:
    Node* head;
    Node* tail;
    int size;
    dequeue(){
        head=tail=NULL;
        size=0;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
           temp->next=head;
           head->prev=temp;
           head=temp;
        }
        size++;
    }
    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void popFront(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        size--;
    }
    void popBack(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    void Size(){
        cout<<size<<endl;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
 };
int main(){
    dequeue dq;
   dq.pushFront(10);
   dq.display(); 
   dq.pushFront(20);
   dq.display();
   dq.pushBack(30);
   dq.display(); 
   dq.pushBack(40);
   dq.display();
   dq.popFront();
   dq.display();
   dq.popBack();
   dq.display();

}