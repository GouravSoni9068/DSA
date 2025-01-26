#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int row=3;
    int col=4;
    int arr[3][4]={
        {10,20,30,40},
        {50,55,57,59},
        {69,72,79,89}
    };
    int target=79;
    cout<<isPresent(arr,row,col,target);
    

    return 0;
}