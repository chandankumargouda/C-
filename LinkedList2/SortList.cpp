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
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void merge(Node* a,Node* b){
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
void mergeSort(Node* head){
    if(head==NULL || head->next==NULL) cout<<head->val;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow=left middle
    Node* a=head;
    Node* b=slow->next;
    slow->next=NULL;
    a=sortList(a);
    b=sortList(b);//dono linked list ko sort karna hai
    merge(a,b);
}
int main(){
    Node* a=new Node(50);
    Node* b=new Node(10);
    Node* c=new Node(20);
    Node* d=new Node(30);
    Node* e=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    mergeSort(a);
}
