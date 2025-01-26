#include<iostream>
using namespace std;

int main()
{
    int arr[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int row=4;
    int col=3;
    int up=0;
    int down=row-1;
    int left=0;
    int right=col-1;
    int oddOrEven=0;
    while(up<=down and left<=right)
    {
        if(oddOrEven%2==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<arr[up][i]<<" ";
            }
            up++;
            for(int i=up;i<=down;i++)
            {
                cout<<arr[i][right]<<" ";
            }
            right--;
        }
        else
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[down][i]<<" ";
            }
            down--;
            for(int i=down;i>=up;i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
        oddOrEven++;
    }
    return 0;
}