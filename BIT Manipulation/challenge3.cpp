//  wap to generate all possible subsets of a set{a,b,c}

#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i& (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }cout <<endl;
    }
}
int main()
{
    int arr[4]={3,5,6,2};
    subsets(arr,4);
}