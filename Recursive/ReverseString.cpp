#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    // cout<<ros<<endl;
    reverse(ros);
    cout<<s[0];
}
int main ()
{
    reverse("MAHAK");
}