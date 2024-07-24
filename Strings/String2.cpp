#include<iostream>
#include<string>

using namespace std;

int main()
{  string s1="fam";
    string s2="ily";
    string s3="goodengineer";
    string s4="3001";
    int x=stoi(s4);// stoi=string to integer
    int y=300;
    // s1.append(s2);
    cout<<s1+s2<<endl;
    cout<<s1[2]<<endl;
    cout<<s2.compare(s1)<<endl;
    cout<<s1.find("am")<<endl;
    s1.erase(2,1);
    cout<<s1<<endl;
    s1.insert(2,"m");
    cout<<s1<<endl;
    cout<<s2.size()<<endl;
    string s= s3.substr(4,5);
    cout<<s<<endl;
    cout<<x-1<<endl;
    cout<<to_string(y)+"1"<<endl;
}