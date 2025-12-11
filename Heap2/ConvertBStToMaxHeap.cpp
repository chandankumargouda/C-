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
void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void stor(vector<int>&arr,Node* root){
    if(root==NULL) return;
    stor(arr,root->right);
    arr.push_back(root->val);
    stor(arr,root->left);
}
void preord(Node* root,vector<int>&arr,int &i){
    if(root==NULL) return;
    root->val=arr[i++];
    preord(root->left,arr,i);
    preord(root->right,arr,i);
}
void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(16);
    Node* d=new Node(1);
    Node* e=new Node(8);
    Node* f=new Node(12);
    Node* g=new Node(20);

    a->left=b; a->right=c;
    b->left=d; b->right=e;
    c->left=f; c->right=g;

    vector<int>arr;
    stor(arr,a);
    print(arr);
    int i=0;
    levelOrder(a);
    preord(a,arr,i);
    xulevelOrder(a);

}