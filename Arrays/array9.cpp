// Subarray Maxsum
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    // Time =o[n3]


    // int maxSum=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     { int s=0;
    //         for(int k=i;k<=j;k++)
    //         {
    //        s+=a[k];
    //     }
    //     // cout<<endl;
    //     maxSum=max(maxSum,s);
    //     }
    // }
    // cout<<maxSum;

    // Time=o[n2]


    // int currSum[n+1];
    // currSum[0]=0;
    // for(int i=1;i<=n;i++)
    // {
    //     currSum[i]=currSum[i-1]+a[i-1];
    // }
    // int maxSum=INT_MIN;
    // for(int i=1;i<=n;i++)
    // {
    //     int s=0;
    //     for(int j=0;j<i;j++)
    //     {
    //         s=currSum[i]-currSum[j];
    //         maxSum=max(s,maxSum);
    //     }
    // }
    // cout<<maxSum;

    // Time =o[n]

    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
      
       
       maxSum=max(currSum,maxSum);
    }
cout<<maxSum;
}