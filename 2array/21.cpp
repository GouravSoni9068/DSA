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
    int sum=0;
    for(int i=0;i<col;i++)
        sum+=arr[i][i];

    cout<<sum; 
    return 0;
}