#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           
                cout<<"*\t";
            
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space;j++){
           
                cout<<" \t";
            
        }
         for(int j=1;j<=i;j++){
           
                cout<<"*\t";
            
        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){                                                                                                                                                                                                                                              
           
                cout<<"*\t";
            
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space;j++){
           
                cout<<" \t";
            
        }
         for(int j=1;j<=i;j++){
           
                cout<<"*\t";
            
        }
        cout<<endl;
    }
}