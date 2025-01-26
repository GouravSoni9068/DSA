#include<iostream>
using namespace std;
bool checkSort(int arr[],int size,int start=0)
{
    if(start>=size-1)
    {
        return true;
    }
    if(arr[start]>arr[start+1])
    {
        return false;
    }
    return checkSort(arr,size,start+1);
}
int main()
{
    int arr[]={10,20,30,40,90};
    cout<<checkSort(arr,5);
    return 0;
}