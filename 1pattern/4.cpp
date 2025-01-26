#include<iostream>
using namespace std;

int main()
{
    int side;
    cin>>side;
    
    for(int i=0;i<side;i++)
    {
        for(int j=0;j<side;j++)
        {
            if(i==0 or j==0 or i==side-1 or j==side-1 or i==j)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}