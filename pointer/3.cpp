#include<iostream>
using namespace std;

int main()
{
    int a=5;
    cout<<a<<endl;

    int* ptr=new int;
    *ptr=20;
    cout<<*ptr<<endl;
    delete ptr;
    cout<<*ptr<<endl;
    return 0;
}