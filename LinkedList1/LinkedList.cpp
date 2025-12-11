//1.Fixed Size
//2.Contigous Memory Allocation
//3.
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
}
int main(){
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   a->next=b;
   b->next=c;
   c->next=d;
   // cout<<a->next->next->next->val<<endl;
//    Node* temp=a;
//    int count=0;
//    while(temp!=NULL){
//     count++;
//     cout<<temp->val<<" ";
//     temp=temp->next;
//    }
//    cout<<endl;
//    cout<<count<<endl; 
   display(a);
   insertAtEnd(a,60);
   display(a);
}