#include<iostream>
#include<string>
using namespace std;
void generate(string str,int n){
    if(n==0){
        cout<<str<<endl;
        return;
    }
     generate(str+"0",n-1);
   if(str=="" || str[str.length()-1]=='0'){
    generate(str+"1",n-1);
   }
}
int main(){
    int n=4;
    generate("",n);
    return 0;
}