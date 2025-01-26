#include<iostream>
using namespace std;
void printDigit(int a)
{
    if(a==0)
    {
        return;
    }
    int rem=a%10;
    printDigit(a/10);
    cout<<rem<<"    ";
}
int main()
{
    int a=2148;
    printDigit(a);
    return 0;
}