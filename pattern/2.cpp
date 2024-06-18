#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Length of rectangle is: ";
    cin>>row;
    cout<<"width of rectangle is: ";
    cin>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}