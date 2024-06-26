#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int start,int end,int target)
{
    
    if(start>end)
    {
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return binarySearch(arr,size,start,mid-1,target);
    }
    else{
        return binarySearch(arr,size,mid+1,end,target);

    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int start=0;
    int end=5;
    cout<<binarySearch(arr,6,start,end,10);
    return 0;
}