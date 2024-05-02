#include <iostream>
using namespace std;

int main(){
    int i=1,a,b;
    a = i++;
    b = ++i;
    i = a + b;
    cout<<i<<endl;
    return 0;
}