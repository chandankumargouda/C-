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
long long maxTree(Node* root){
    if(root==NULL) return LLONG_MIN;
    return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
}
long long minTree(Node* root){
    if(root==NULL) return LLONG_MAX;
    return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
}
bool isValidBST(Node* root){//brute force
    if(root==NULL) return true;
    else if((long long)(root->val) <= maxTree(root->left)) return false;
    else if((long long)(root->val) >= minTree(root->right)) return false;
    return isValidBST(root->left) && isValidBST(root->right);
}
void inorder(Node* root,vector<int>& ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
bool isValidBBST(Node* root){
    vector<int>ans;
    inorder(root,ans);
    for(int i=0;i<ans.size();i++){
        if(ans[i]<ans[i+1]) return true;
        else return false;
    }
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
    vector<int>ans;
    display(a);
    cout<<endl;
    cout<<isValidBST(a);
    cout<<endl;
    cout<<isValidBBST(a);

}