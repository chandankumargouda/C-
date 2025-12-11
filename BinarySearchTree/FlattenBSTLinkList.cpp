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
void flatten1(Node* root){//tc=O(n),sc=O(n)
    if(root==NULL) return;
    Node* l=root->left;
    Node* r=root->right;
    root->left=NULL;
    root->right=NULL;
    flatten1(l);
    flatten1(r);
    root->right=l;
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->right=r;
}
void flatten2(Node* root){//tc=O(n),sc=O(1)
    if(root==NULL) return;
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            //save the right
            Node* r=curr->right;
            curr->right=curr->left;
            //finding pred
            Node* pred=curr->left;
            while(pred->right!=NULL) pred=pred->right;
            //link
            pred->right=r;
            curr=curr->left;
        }else{
            curr=curr->right;
        }
    }
    Node* temp=root;
    while(temp->right!=NULL){
        temp->left=NULL;
        temp=temp->right;
    }
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
    cout<<endl;
    flatten1(a);
    display(a);
    cout<<endl;
    flatten2(a);
    display(a);
}  