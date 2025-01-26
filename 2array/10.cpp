#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,1,0,0,1,1};
    int start=0;
    int end=6;
    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        if(arr[end]==1)
        {
            end--;
        }
        if(arr[start]==1 and arr[end]==0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]==1 and arr[end]!=0)
        {
            end--;
        }
        else if(arr[end]==0 and arr[start]!=1)
        {
            start++;
        }

    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}