#include<iostream>
using namespace std;

int main()
{
    int len,wid;
    cout<<"len: ";
    cin>>len;
    cout<<"wid: ";
    cin>>wid;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<wid;j++)
        {
            if(i==0 or i==len-1 or j==0 or j==wid-1)
            {
                cout<<"* ";
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}