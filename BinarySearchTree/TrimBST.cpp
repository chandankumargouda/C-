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
void helper(Node* root,int lo,int hi){
    if(root==NULL) return;
    while(root->left!=NULL){
        if(root->left->val < lo){
            root->left=root->left->right;
        }else if(root->left->val > hi){
            root->left=root->left->right;
        }
        else break;
    }
    while(root->right!=NULL){
        if(root->right->val > hi){
            root->right=root->right->left;
        }else if(root->right->val < lo){
            root->right=root->right->left;
        }
        else break;
    }
helper(root->left,lo,hi);
helper(root->right,lo,hi);
}
Node* trimBST(Node* root,int lo,int hi){
    Node* dummy=new Node(INT_MAX);
    dummy->left=root;
    helper(dummy,lo,hi);
    // return dummy->left;
    display(root);
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
   cout<< trimBST(a,1,16);
} 