#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row=3;
    int col=3;
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i+j==row-1 )
                    cout<<arr[i][j]<<" ";
            }
        }
    
    
    return 0;
}