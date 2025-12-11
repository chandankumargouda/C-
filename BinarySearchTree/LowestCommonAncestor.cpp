#include<bits/stdc++.h>
using namespace std;
//timeComlexity->bc=O(log(n))
//               wc/ac=O(n)   
//SpaceComlexity->bc=O(log(n))
//               wc/ac=O(n)   
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
int LCA(Node* root,Node* p,Node* q){
    if(root->val==p->val || root->val==q->val) return root->val;
    else if(root->val>p->val && root->val<q->val) return root->val;
    else if(root->val<p->val && root->val>q->val) return root->val;
    else if(root->val<p->val && root->val<q->val) return LCA(root->right,p,q);
    else return LCA(root->left,p,q);
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(2);
    Node* d=new Node(8);
    Node* e=new Node(6);
    Node* f=new Node(15);
    Node* g=new Node(12);
    Node* h=new Node(18);
    Node* i=new Node(13);
    a->left=b;
    a->right=f;
    b->left=c;
    b->right=d;
    d->left=e;
    g->right=i;
    f->left=g;
    f->right=h;

    display(a);
    cout<<endl;
    cout<<LCA(a,b,d);
    cout<<endl;
    display(a);
}