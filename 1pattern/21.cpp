#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==n-1 or j==i or j==0)
            {
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}