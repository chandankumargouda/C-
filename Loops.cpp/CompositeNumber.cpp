#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" "<<"It Is A Composite Number.";
            break;
        }else{
            cout<<n<<" "<<"It Is A Prime Number.";
            break;
        }
    }
    return 0;
}