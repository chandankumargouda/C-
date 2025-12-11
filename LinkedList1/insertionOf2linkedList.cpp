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
void display(Node* headA,Node* headB){
    int lenA=0;
    int len0;
    Node* tempA=headA;
    Node* tempB=headB;
    while(tempA!=NULL){
        lenA++;
        cout<<tempA->val<<" ";
        tempA=tempA->next;
    }
    cout<<endl;
    Node* tempB=head;
    while(tempB!=NULL){
        lenB++;
        cout<<tempB->val<<" ";
        tempB=tempB->next;
    }
    cout<<endl;
    tempA=headA;
    tempB=headB;
    if(lenA>lenB){
        int diff=lenA-lenB;
        for(int i=1;i<=diff;i++)[
            tempA=tempA->next;
        ]
       while(tempA!=tempB){
        tempA=tempA->next;
        tempB=tempB->next;
       } 
       cout<<tempA;
    }else{
        int diff=lenB-lenA;
        for(int i=1;i<=diff;i++)[
            tempB=tempB->next;
        ]
       while(tempA!=tempB){
        tempA=tempA->next;
        tempB=tempB->next;
       } 
       cout<<tempA;
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
    cout<<display(a,a);
  
}
