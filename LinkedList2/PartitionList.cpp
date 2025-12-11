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
void partition(Node* head,int x){
    Node* low=new Node(0);
    Node* high=new Node(0);
    Node* tl=low;
    Node* th=high;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            tl->next=temp;
            temp=temp->next;
            tl=tl->next;
        }else{
            th->next=temp;
            temp->next=temp;
            th=th->next;
        }
    }
    tl->next=high->next;
    th->next=NULL;
    cout<<low->next->val;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(80);
    Node* c=new Node(40);
    Node* d=new Node(20);
    Node* e=new Node(60);
    Node* f=new Node(70);
    Node* g=new Node(15);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e; 
    e->next=f;
    f->next=g; 
    display(a);
    partition(a,41);
}
