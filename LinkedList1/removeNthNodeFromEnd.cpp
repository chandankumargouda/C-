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
void display(Node* head,int n){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        len++;
        temp=temp->next;
    }
    temp=head;
    cout<<endl;
    if(len==n){
        head=head->next;
        cout<<head->val;
    }else{
    int m=len-n+1;
    int idx=m-1;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    cout<<head->val;
    }
}
void remove(Node* head,int n){
    Node* slow=head;
    Node* fast=head;
    for(int i=1;i<=n+1;i++){
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
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
    //display(a,4);
    remove(a,3);
}