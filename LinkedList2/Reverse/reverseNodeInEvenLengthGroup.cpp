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
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* newHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
};
void splits(Node* head,int left,int right){
    if(left==right) cout<<head->next;
    Node* temp=head;
    Node* a=NULL;
    Node* b=NULL;
    Node* c=NULL;
    Node* d=NULL;
    int n=1;
    while(temp!=NULL){
        if(n==left-1) a=temp;
        if(n==left) b=temp;
        if(n==right) c=temp;
        if(n==right+1) d=temp;
        temp=temp->next;
        n++;
     }
     if(a!=NULL) a->next=NULL;
     c->next=NULL;
     c=reverse(b);
     if(a!=NULL)a->next=c;
     b->next=d;
    //  if(a) return head;
    //  return c;
}
void reverseEvenLength(Node* head){
    Node* temp=head;
    int gap=1;
    while(temp!=NULL && temp->next!=NULL){
        int remLen=0;
        Node* t=temp->next;
        for(int i=1;i<=gap+1 && t!=NULL;i++){
            t=t->next;
            remLen++;
        }
        if(remLen<gap+1) gap=remLen-1;
        if(gap%2!=0)splits(temp,2,gap+2);
        gap++;
        for(int i=1;i<=gap;i++){
            temp=temp->next;
        }
    }
    display(head);
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
    reverseEvenLength(a);
}
