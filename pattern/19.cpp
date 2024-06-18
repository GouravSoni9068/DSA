#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            char ch='A'+j;
            cout<<ch;
        }
        for(int j=0;j<=i-1;j++)
        {
            char ch='A'+i-j-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}