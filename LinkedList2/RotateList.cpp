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
void show(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void display(Node* head,int k){
    if(head==NULL || head->next==NULL) cout<<head->val;
    int n=0;
    Node* temp=head;
    Node* tail=NULL;
    while(temp!=NULL){
        if(temp->next==NULL) tail=temp;
        n++;
        temp=temp->next;
    }
    if(k==0) cout<<head->val;
    k=k%n;
    //i have to place temp at (n-k)th position
    temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    cout<<head->val;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e; 
    show(a);
    display(a,3);
    show(a);
}
