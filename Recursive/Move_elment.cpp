#include<iostream>

using namespace std;

string movellx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans = movellx(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    cout<<movellx("axxbdxcefxhix")<<endl;
}