#include<iostream>
using namespace std;
void count(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n<<"  ";
    count(n-1);
}
int main()
{
    int n=10;
    count(n);
    return 0;
}