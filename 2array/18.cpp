#include<iostream>
using namespace std;

int main()
{
    int row=3;
    int col=3;
    int arr[3][3]={
        {70,23,41},
        {27,69,-2},
        {56,92,18}
    };
    int max=INT8_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"max: "<<max;
    return 0;
}