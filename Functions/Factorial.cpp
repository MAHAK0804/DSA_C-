#include<iostream>
using namespace std;
int fact(int n){
    int x=1;
    for(int i=2;i<=n;i++){
        x*=i;
    }
    return x;
}

int main(){
    int n;
    cin>>n;

   int ans= fact(n);
   cout<<ans<<endl;
}