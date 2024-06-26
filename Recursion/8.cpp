#include<iostream>
using namespace std;
bool isPresent(int arr[],int start,int size,int target)
{
    if(start==size)
    {
        return false;
    }
    if(arr[start]==target)
    {
        return true;
    }
    isPresent(arr,start+1,size,target);

}
int main()
{
    int arr[]={1,2,3,4,5};
    int target=10;
    cout<<isPresent(arr,0,5,target);
    return 0;
}