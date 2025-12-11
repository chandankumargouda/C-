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
void merge1(Node* a,Node* b){
    //sc=O(m+n); with extra space
    Node* tempA=a;
    Node* tempB=b;
    Node* c=new Node(0);
    Node* tempC=c;
    while(tempA!=NULL && tempB!=NULL){
        if(tempA->val<=tempB->val){
            Node* t=new Node(tempA->val);
            tempC->next=t;
            tempC=t;
            tempA=tempA->next;
        }else{
            Node* t=new Node(tempB->val);
            tempC->next=t;
            tempC=t;
            tempB=tempB->next;
        }
    }
if(tempA==NULL){
    tempC->next=tempB;
}else{
    tempC->next=tempA;
}
display(c);
}
void merge2(Node* a,Node* b){
    Node* c=new Node(0);
    Node* temp=c;
    while(a!=NULL && b!=NULL){
        if(a->val <= b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL) temp->next=b;
    else temp->next=a;
 display(c);
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
    
    Node* A=new Node(1);
    Node* B=new Node(2);
    Node* C=new Node(3);
    Node* D=new Node(4);
    Node* E=new Node(5);
    A->next=B;
    B->next=C;
    C->next=D;
    D->next=E;
    display(a);
    display(A);
    merge1(a,A);
    merge2(a,A);
}
