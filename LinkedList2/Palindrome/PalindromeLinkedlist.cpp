#include<iostream>
using namespace std;//bad code ...tc=0(n^2)
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
Node* getNodeAt(Node* head,int idx){
    Node* temp=head;
    for(int i=0;i<idx;i++){
        temp=temp->next;
    }
    return temp;
}
bool Palindrome(Node* head){
    int n=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        n++;
    }
    int i=0;
    int j=n-1;
    while(i<j){
        Node* left=getNodeAt(head,i);
        Node* right=getNodeAt(head,j);
        if(left->val!=right->val) return false;
        i++;
        j--;
    }
    temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
   cout<<Palindrome(a);
}
