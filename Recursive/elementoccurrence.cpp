#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int key)
{
    if(arr[i]==key)
    {
        return i;
    }
    if(i==n)
    {
        return -1;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[], int n ,int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,2};
    cout<<firstocc(arr,5,0,2)<<endl<<lastocc(arr,5,0,2);
}