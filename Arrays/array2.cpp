#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
       
          maxno=max(maxno,num[i]);
          minno=min(minno,num[i]);
        }
        cout<<"largest--"<<maxno<<" "<<"smallest--"<<minno;
    }

