#include<iostream>
using namespace std;

int main()
{
    int row=3;
    int col=3;
    int arr[row][col]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    for(int i=0;i<row;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}