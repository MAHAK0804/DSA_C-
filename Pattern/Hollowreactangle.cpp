#include<iostream>
using namespace std;

int main(){
        int rows,cols,j;
        cin>>rows>>cols;
        for(int i=0;i<rows;i++)
        {
            for( j=0;j<cols;j++)
            {
                 if(i==0 || i== rows-1)
            {
                cout<<"*\t";
            }
            
            else if(j==0 || j==cols-1){
                cout<<"*\t";
            }
            else{
                cout<<" \t";
            }
        }
        cout<<"\n";
        }
    return 0;
}