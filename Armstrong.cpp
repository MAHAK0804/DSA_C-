#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
     cin>>n;
     int sum=0;
     int original=n;
     while(n>0){
       int r = n%10;
        sum=sum+pow(r,3);
        cout<<sum<<endl;
        n=n/10;
        
     }
       if(sum==original){
            cout<<"Armstrong number";
        }
        else{
            cout<<"NOT Armstrong";
        }


}