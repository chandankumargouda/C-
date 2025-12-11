#include<iostream>
using namespace std;
class Node{//DLL node
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;//extra for DLL
    }
};
void display1(Node* head){//print sc=O(1)
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void display2(Node* tail){//print reverse sc=O(1)
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void displayRec1(Node* head){//print sc=O(n)
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec1(head->next);
}
void displayRec2(Node* head){//print reverse sc=O(n)
    if(head==NULL) return;
    displayRec2(head->next);
    cout<<head->val<<" ";
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

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
display1(a);
display2(e);
displayRec1(a);
cout<<endl;
displayRec2(a);
}
//benifits
//1.we can print reverse order linkedlist with out using recurtion.
//2.if any node of list is given ,we can traverse through the entire list.