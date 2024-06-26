#include<iostream>
using namespace std;
void print(int arr[],int start,int size)
{
    if(start==size)
    {
        return;
    }
    print(arr,start+1,size);
    cout<<arr[start]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5};
    print(arr,0,5);
    return 0;
}