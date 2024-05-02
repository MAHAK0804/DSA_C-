#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
     
     if(a>b){
        if(a>c){
            cout<<a<<"-->largest number"<<endl;
        }
        else{
            cout<<c<<"--> largest number"<<endl;
        }
     }
     else{
        if(b>c){
            cout<<b<<"-->largest number"<<endl;
        }
         else{
            cout<<c<<"--> largest number"<<endl;
        }
     }

     if(a%2==0){
        cout<<a<<"-->even number"<<endl;
     }
     else{
        cout<<a<<"-->odd number"<<endl;
     }
}