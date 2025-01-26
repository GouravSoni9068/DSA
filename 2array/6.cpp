#include<iostream>
using namespace std;
int countZeros(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    return count;
}
int countOnes(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={0,1,1,1,0,0,1};
    int zeros=countZeros(arr,7);
    int ones=countOnes(arr,7);
    cout<<zeros<<"  "<<ones;
    return 0;
}