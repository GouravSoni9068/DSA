#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40};
    int target=100;
    cout<<linearSearch(arr,4,target);
    return 0;
}