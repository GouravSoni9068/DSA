#include<iostream>
using namespace std;
int findMax(int arr[],int size)
{
    int max=INT8_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={13,21,14,27};
    int max=findMax(arr,4);
    cout<<max;
    return 0;
}