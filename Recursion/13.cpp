#include<iostream>
using namespace std;
bool isSorted(int arr[],int size,int index=0)
{
    if(index==size-1)
    {
        return true;
    }
    if(arr[index]>arr[index+1])
    {
        return false;
    }
    return isSorted(arr,size,index+1);
}
int main()
{
    int arr[]={10,20,30,40,45,50};
    cout<<isSorted(arr,7);
    return 0;
}