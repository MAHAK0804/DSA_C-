#include<iostream>
using namespace std;

int sum(int a){
    int s=0;
    for(int i=1;i<=a;i++){
        s+=i;
    }
    return s;
}

int main(){
    int n;
     cin>>n;
     int ans=sum(n);
     cout<<"sum is:"<<ans;

}