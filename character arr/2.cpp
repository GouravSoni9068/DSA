#include<iostream>
using namespace std;

int main()
{
    char arr[1000];
    cin>>arr;
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}