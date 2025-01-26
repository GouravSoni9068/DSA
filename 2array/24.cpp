#include<iostream>
#include<vector>
using namespace std;
void movAllNeg(vector<int> &arr,int size)
{
    int l=0;
    int r=size-1;
    while(l<r)
    {
        if(arr[l]<0)
        {
            l++;
        }
        else if(arr[r]>0)
        {
            r--;
        }
        else{
            swap(arr[l],arr[r]);
        }
    }
}
int main()
{
    vector<int> arr={1,2,-3,4,-5,6};
    movAllNeg(arr,6);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}