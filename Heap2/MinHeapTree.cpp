#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
class MinHeap{
    public:
    int arr[50];
    int idx;
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        //swappping until i=1
        while(i!=1){
            int parent=i/2;
            if(arr[parent]>arr[i]){
                swap(arr[parent],arr[i]);
            }else break;
            i=parent;
        }
    }
    int size(){
        return idx-1;
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right] ){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i=left;
                }
                else break;
            }else{
                if(arr[right]<arr[i]){
                    swap(arr[right],arr[i]);
                    i=right;
                }
                else break;
            }
        }
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(11);
    pq.push(2);    
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
}