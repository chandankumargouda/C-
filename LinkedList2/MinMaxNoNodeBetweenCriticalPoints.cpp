//1.Fixed Size
//2.Contigous Memory Allocation
//3.
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
void maxMin(Node* head){
    int idx=1;
    int fidx=-1;
    int sidx=-1;
    Node* a=head;
    Node* b=head->next;
    Node* c=head->next->next;
    while(c){
        if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val){
            if(fidx==-1) fidx=idx;
            else sidx=idx;
        }
        a-a->next;
        b=b->next;
        c=c->next;
        idx++;
    }
   // if(sidx==-1) return {-1,-1};
    int maxIdx=sidx-fidx;
    int minIdx=INT_MAX;
    idx=1;
     fidx=-1;
     sidx=-1;
     a=head;
     b=head->next;
     c=head->next->next;
    while(c){
        if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val){
             fidx=sidx;
             sidx=idx;
             int d=sidx-fidx;
             minIdx=min(minIdx,d);
        }
        a-a->next;
        b=b->next;
        c=c->next;
        idx++;
    }
    //return {minIdx,maxIdx};
    cout<<"{"<<minIdx<<","<<maxIdx<<"}";
}
int main(){
   Node* a=new Node(5);
   Node* b=new Node(3);
   Node* c=new Node(1);
   Node* d=new Node(2);
   Node* e=new Node(5);
   Node* f=new Node(1);
   Node* g=new Node(2);
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   e->next=f;
   f->next=g;
   display(a);
   maxMin(a);
}