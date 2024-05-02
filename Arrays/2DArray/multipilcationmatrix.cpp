#include<iostream>
using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    int a[n][m],b[m][x];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n][x];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            c[i][j]=0;
        }
    }
    cout<<"first matrix:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second matrix:"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"multipilication matrix:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<m;k++)
            {
              c[i][j]+=a[i][k]*b[k][j];
            
            }
            
        }
       
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}