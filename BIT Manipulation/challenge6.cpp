//  wap to find a unique number in an array where all number except one, are present thrice
#include<iostream>
using namespace std;

bool getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}
int unique(int arr[], int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum % 3 !=0)
        {
            result=setBit(result,i);
        }
    }
    return result;
}

int main()
{
    int arr[]={1,3,2,3,4,2,1,1,3,2};
   cout<< unique(arr,10);
}