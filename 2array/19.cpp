#include<iostream>
using namespace std;

int main()
{
    int row=3;
    int col=3;
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}