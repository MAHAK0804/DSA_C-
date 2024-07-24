//  First Repeating element
#include<iostream>
#include<climits>
using namespace std;
int firstrepeatingelement(int arr[],int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((arr[i]==arr[j]))
            {
               return i;
            }
           

        }
        
    }
    return -1;

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];

    }
    int index=firstrepeatingelement(a,n);
    if(index==-1){
        return 0;
    }
    else{
        cout<<index;
    }
   
}