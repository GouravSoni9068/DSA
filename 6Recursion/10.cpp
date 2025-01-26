#include<iostream>
using namespace std;
void printOdd(int arr[],int size,int start=0)
{
    if(start==size)
    {
        return;
    }
    if((arr[start]&1)==0)
    {
        cout<<arr[start]<<" ";
    }
    printOdd(arr,size,start+1);
}
int main()
{
    int arr[]={20,21,30,31,50,51};
    printOdd(arr,6);
    return 0;
}