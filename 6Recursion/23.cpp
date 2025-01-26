#include<iostream>
using namespace std;
void print(int arr[],int i,int n)
{
    if(i==n)
    {
        return;
    }
    cout<<arr[i]<<"    ";
    print(arr,i+1,n);
}

int main()
{
    int arr[]={1,2,3,4,5};
    print(arr,0,5);
    return 0;
}