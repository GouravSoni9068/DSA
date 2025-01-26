#include<iostream>
using namespace std;

void printValue(int n)
{
    if(n==0)
    {
        return;
    }
    printValue(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    n=10;
    printValue(n);
    return 0;
}