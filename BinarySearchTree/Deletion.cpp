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
Node* pre(Node* root){
    if(root->left==NULL) return NULL;
    Node* pred=root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    return pred;
};
Node* succ(Node* root){
    if(root->right==NULL) return NULL;
    Node* succ=root->right;
    while(succ->left!=NULL){
        succ=succ->left;
    }
    return succ;
};
Node* deletion(Node* root,int target){
    if(root==NULL) return NULL;
    if(root->val==target){
        //1 case:No chld
        if(root->left==NULL && root->right==NULL) return NULL;
        //case2:1 child
        if(root->left==NULL || root->right==NULL){
            if(root->left==NULL) return root->left;
            else return root->right;
        }
        //case 3: with 2 child
        if(root->left!=NULL && root->right!=NULL){
            //replace the root with its  inorder pred/succ
            //after replacing delete the pred/succ
            Node* pred=pre(root);
            root->val=pred->val;
            root->left=deletion(root->left,pred->val);
        }
    }
    else if(root->val>target){//go right
        root->left=deletion(root->left,target);
    }else{//go left
        root->right=deletion(root->right,target);
    }
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
    deletion(a,5);
} 