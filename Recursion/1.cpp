#include<iostream>
using namespace std;
int factorial(int i)
{
    if(i==0)
    {
        return 1;
    }
    return i*factorial(i-1);
}

int main()
{
    int i;
    cin>>i;
    int ans=factorial(i);
    cout<<ans;
    return 0;
}