#include<iostream>
using namespace std;//bad code ...tc=O(n)& sc=O(n)
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
bool isPalindrome(Node* head){
    Node* c=new Node(10);
    //deep copy of head
    Node* temp=head;
    Node* tempc=c;
    while(temp!=NULL){
        Node* node=new Node(temp->val);
        tempc->next=node;
        temp=temp->next;
        tempc=tempc->next;
    }
    c=c->next;
    c=reverse(c);
    Node* a=head;
    Node* b=c;
    while(a!=NULL){
        if(a->val!=b->val) return false;
        a=a->next;
        b=b->next;
    }
    return true;
}
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
   cout<<isPalindrome(a);
}
