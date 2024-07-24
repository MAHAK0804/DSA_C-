#include<iostream>
using namespace std;

int main()
{
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    // check pallindrome
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check =1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"word is palindrome"<<endl;
    }
    else
    {
        cout<<"word is not palindrome"<<endl;
    }
    // largest word in sentence
    int m;
    cin>>m;
    // cin.ignore();
    char b[m+1];
    cin.getline(b,m);
    cin.ignore();

    int x=0;
    int currlen=0,maxlen=0;
    while(1)
    {
        if(b[x]==' '|| b[x]=='\0')
        {
            if(currlen > maxlen)
            {
                maxlen = currlen;
            }
            currlen = 0;
        }
        else
        currlen++;
        if(b[x]=='\0')
            break;
            
        x++;
    }
        
    cout<<maxlen<<endl;


}