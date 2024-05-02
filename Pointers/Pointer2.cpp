// #include<iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main()
// {
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<*p<<endl;
//     int **q=&p;
//     cout<<*q<<endl;
//     cout<<**q<<endl;
//     int x=2,y=4;
//     int *xpt=&x,*ypt=&y;
//     swap(xpt,ypt);
//     cout<<x<<" "<<y<<endl;;

//     char ch='a';
//     char *ptr;
//     ptr=&ch;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
// }
#include <iostream>

int main() {
    char* ptr; // Declare a pointer to char
    char ch = 'A'; // Assign a character 'A' to a variable
    
    ptr = &ch; // Assign the address of 'ch' to the pointer
    
    std::cout << "Memory addresses by incrementing one byte:\n";
    
    // Print memory addresses by incrementing one byte
    for (int i = 0; i < sizeof(ch); ++i) {
        std::cout << "Address: " << (void*)ptr << ", Value: " << *ptr << std::endl;
        ++ptr; // Increment the pointer by one byte
    }
    
    return 0;
}
