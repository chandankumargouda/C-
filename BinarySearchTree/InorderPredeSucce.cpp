#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){
    if(root==NULL) return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
void pred(Node* root){
    if(root->left==NULL) return;
    Node* pred=root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    cout<< pred->val;
}
void succ(Node* root){
    if(root->right==NULL) return;
    Node* succ=root->right;
    while(succ->left!=NULL){
        succ=succ->left;
    }
    cout<< succ->val;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(20);
    Node* d=new Node(2);
    Node* e=new Node(8);
    Node* f=new Node(15);
    Node* g=new Node(25);
    Node* h=new Node(4);
    Node* i=new Node(12);
    Node* j=new Node(3);
    Node* k=new Node(13);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=h;
    h->left=j;
    f->left=i;
    i->right=k;

    display(a);
    cout<<endl<<"Pred is:";
    pred(a);
    cout<<endl<<"Succ is:";
    succ(a);
} 