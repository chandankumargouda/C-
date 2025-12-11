#include<iostream>
using namespace std;//leetcode 54;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int m;
    cout<<"Enter m:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
   int minr=0,minc=0,maxr=n-1,maxc=m-1;
   Node* temp=head;
   while(minr<=maxr && minc<=maxc){
    if(temp==NULL) break;
    //for right
   for(int j=minc;j<=maxc;j++){
    arr[minr][j]=temp->val;
    temp=temp->next;
   }
   minr++;
   if(minr>maxr || minc>maxc)break;
   //for down
   for(int i=minr;i<=maxr;i++){
    arr[i][maxc]=temp->val;
    temp=temp->next;
   }
   maxc--;
   if(minr>maxr || minc>maxc)break;
   //for left
   for(int j=maxc;j>=minc;j--){
    arr[maxr][j]=temp->val;
    temp=temp->next;
   }
   maxr--;
   if(minr>maxr || minc>maxc)break;
   //for up
   for(int i=maxr;i>=minr;i--){
    arr[i][minc]=temp->val;
    temp=temp->next;
   }
   minc++;
   }
    return 0;
}