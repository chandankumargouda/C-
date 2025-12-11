#include<iostream>
using namespace std;//bad code ...tc=O(n)& sc=O(1)
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
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* newHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
};
Node* reorder(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    //slow at the left middle/middle
    Node* b=reverse(slow->next);
    Node* a=head;
    slow->next=NULL;
    //merge these 2 - a and b alternatively
    Node* c=new Node(0);
    Node* tempc=c;
    Node* tempa=a;
    Node* tempb=b;
    while(tempa!=NULL || tempb!=NULL){
        tempc->next=tempa;
        tempa=tempa->next;
        tempc=tempc->next;

        tempc->next=tempb;
        tempb=tempb->next;
        tempc=tempc->next;
    }
    tempc->next=tempa;
    head=c->next;
};
int main(){
    Node* a=new Node(10);
    Node* b=new Node(80);
    Node* c=new Node(40);
    Node* d=new Node(20);
    Node* e=new Node(40);
    Node* f=new Node(80);
    Node* g=new Node(10);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e; 
    e->next=f;
    f->next=g; 
    display(a);
   reorder(a);
}
