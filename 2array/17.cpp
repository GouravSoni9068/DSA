#include<iostream>
#include<vector>
using namespace std;
void value(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=j;
        }
        cout<<endl;
    }
}
int main()
{
    int row=3;
    int col=4;
    vector<vector<int>> vec(row,vector<int>(col));
    value(vec,row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<vec[0].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}