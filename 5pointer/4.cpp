#include<iostream>
using namespace std;

int main()
{
    // int a[5]={1};
    // cout<<a[0]<<a[1]<<a[2]<<endl;


    // int* arr=new int[5];
    // cout<<arr[0]<<arr[1]<<arr[2];

    int** arr=new int*[4];
    for(int i=0;i<4;i++)
    {
        arr[i]=new int[3];
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"    ";

        }
        cout<<endl;
    }
    return 0;
}