#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<"--> Non Prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<"-->Prime number"<<endl;
    }
}