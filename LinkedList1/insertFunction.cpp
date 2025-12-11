#include<iostream>
using namespace std;
class Node{//user define data constructor
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
 class LinkedList{//user define data pointer
 public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
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
    void insertAtBeg(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
           temp->next=head;
           head=temp;
        }
        size++;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAt(int val,int idx){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtBeg(val);
        else if(idx==size-1) insertAtEnd(val); 
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }    
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
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
    void deleteAt(int idx){
        if(idx<0 || idx>=size){
            cout<<"List is Empty";
            return;
        }else if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx==0)return deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }

    }
    int getElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        } 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        } 
    }

 };
int main(){
   LinkedList ll;
   ll.insertAtBeg(10);
   ll.display(); 
   ll.insertAtBeg(20);
   ll.display();
   ll.insertAtEnd(30);
   ll.display(); 
   ll.insertAtEnd(40);
   ll.display();
   ll.insertAt(50,2);
   ll.display();
   ll.deleteAtHead();
   ll.display();
   ll.deleteAtTail();
   ll.display();
   ll.deleteAt(1);
   ll.display();
  // cout<<ll.getElement(3);
}