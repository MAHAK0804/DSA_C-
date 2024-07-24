#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character:"<<endl;
    cin>>button;
    switch(button){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Hiiiii"<<endl;
            break;
        case 'c':
            cout<<"Learning"<<endl;
            break;
        case 'd':
            cout<<"What'sup?"<<endl;
            break;
        default:
            cout<<"Learning more...."<<endl;
            break;
    }
}