#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Go out today!"<<date<<endl;
        pocketmoney=pocketmoney-300;
        cout<<pocketmoney<<endl;
    }
    for(int n=1;n<=100;n++){
        if(n%3==0){
            continue;
        }
        cout<<n<<endl;
    }
    int m,i;
    cin>>m;
    for(i=2;i<m;i++){
        if(m%i==0){
            cout<<"Non prime number"<<endl;
            break;
        }
    }
    if(i==m){
        cout<<"Prime number"<<endl;
    }


    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                // cout<<num<<"\tNonPrime Number"<<endl;
                break;
            }
        }
        if(num==i){
            cout<<num<<"\tPrime number"<<endl;
        }

    }
    return 0;
}