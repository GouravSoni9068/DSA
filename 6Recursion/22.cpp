#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int> arr,int ele,int i,int j)
{
    if(i>j)
    {
        return -1;
    }
    int mid=(i+j)/2;
    if(arr[mid]==ele)
    {
        return mid;
    }
    else if(arr[mid]>ele)
    {
        return binSearch(arr,ele,i,mid-1);
    }
    else
    {
        return binSearch(arr,ele,mid+1,j);
    }
}
int main()
{
    vector<int> arr={-1,0,3,5,9,12};
    int ele=15;
    int n=6;
    cout<<binSearch(arr,ele,0,n-1);
    return 0;
}