#include<iostream>
#include<vector>
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
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void split(Node* head,int k){
    //find the length of the original linked list
    int n=0;
    Node* temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    //breaking the list into k lists
    vector<Node*>ans;
    int size=n/k;
    int rem=n%k;
    temp=head;
    while(temp!=NULL){
        Node* c=new Node(0);
        Node* tempc=head;
        int s=size;
        if(rem>0) s++;
        rem--;
        for(int i=1;i<=size;i++){
            tempc->next=temp;
            temp=temp->next;
            tempc=tempc->next;
        }    
        tempc->next=NULL;
        ans.push_back(c->next);
    }
    if(ans.size()<k){
        int extra=k-ans.size();
        for(int i=1;i<=extra;i++){
            ans.push_back(NULL);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);
    Node* h=new Node(80);
    Node* i=new Node(90);
    Node* j=new Node(100);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;

    j->prev=i;
    i->prev=h;
    h->prev=g;
    g->prev=f;
    f->prev=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
display(a);
split(a,3);
}
