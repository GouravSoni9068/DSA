#include<iostream>
using namespace std;
bool checkSort(int arr[],int size,int start=0)
{
    if(start>=size-1)
    {
        return true;
    }
    
    bool ans=true;
    if(arr[start]<arr[start+1])
    {
        ans=false;
    }
    
    return (ans and checkSort(arr,size,start+1));
}
int main()
{
    int arr[]={100,200,100,40,10};
    cout<<checkSort(arr,5);
    return 0;
}