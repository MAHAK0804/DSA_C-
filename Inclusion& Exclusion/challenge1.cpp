//  wap to find numbers between 1 and 1000 are divisible by 5 or 7

#include<iostream>
using namespace std;


int main()
{
    int count =0;
     for ( int i=1;i<=40;i++)
     {
        if((i % 5 ==0) || (i%7==0))
        {
            cout<<i<<" "<<endl;
            count++;
        }
     }
     cout<<"Total number:-"<<count;
}