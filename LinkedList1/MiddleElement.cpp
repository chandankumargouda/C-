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
// int display(Node* head){
//     int count=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         count++;
//         //cout<<head->val<<" ";
//         temp=temp->next;
//     }
//     //cout<<endl;
//     int midIdx=count/2;
//     Node* mid=head;
//     for(int i= 1;i<=midIdx;i++){
//         mid=mid->next;
//     }
//     return mid->val;
// }
int getElement(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        //while(fast->next!=NULL && fast!=NULL ){ wrong  
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->val;
}
//for left mid of even no of linked list
//while(fast->next->next!=NULL){
        //slow=slow->next;
        //fast=fast->next->next;
//}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    //Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
   // d->next=e;
  // cout<<display(a);
  cout<<getElement(a);
}
