#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    int x=1;
    for(int i=2;i<=n;i++){
        x*=i;
    }
    return x;
}

int main(){
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
           cout<<fact(i)/(fact(i-j)*fact(j));
        }
        cout<<endl;
    }
}