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
void isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=true;
            break;
        }
    }
   if(flag==false) cout<<false;
   else{
    Node* temp=head;
    while(temp!=slow){
        slow=slow->next;
        temp=temp->next;
    }
    cout<< slow->val;
   }
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
    e->next=b;
    isCycle(a);
}
