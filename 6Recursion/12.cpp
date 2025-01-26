#include<iostream>
using namespace std;
void seprate(int n)
{
    if(n==0)
    {
        return;
    }
    seprate(n/10);
    cout<<n%10<<" ";
}

int main()
{
    int n=389;
    seprate(n);

    return 0;
}