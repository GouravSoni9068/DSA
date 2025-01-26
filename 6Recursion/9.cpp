#include<iostream>
using namespace std;
int mini(int arr[],int start,int size)
{
    if(start==size-1)
    {
        return arr[size-1];
    }
    int m=mini(arr,start+1,size);
    if(arr[start]>m)
    {
        return arr[start];
    }
    return m;
}
int main()
{
    int arr[]={10,30,50,3};
    int m=mini(arr,0,4);
    cout<<m;
    return 0;
}