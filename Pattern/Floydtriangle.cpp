#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<i+1){
                cout<<count<<'\t';
                count++;
            }
        }
        cout<<endl;
    }
}