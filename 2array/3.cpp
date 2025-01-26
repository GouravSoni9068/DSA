#include<iostream>
using namespace std;
void solve(int *arr,int size)
{
    arr[1]=50;
}
int main()
{
    int arr[4]={10};
    // solve(arr,4);
    for(int ele:arr)
    {
        cout<<ele<<"  ";
    }
    return 0;
}