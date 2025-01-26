#include<iostream>
using namespace std;
pair<int,int> checkTwoSum(int arr[],int n,int target)
{
    pair<int,int> p=make_pair(-1,-1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((arr[i]+arr[j])==target)
            {
                p.first=arr[i];
                p.second=arr[j];
                return p;
            }
        }
    }
    return p;
}
int main()
{
    int arr[]={10,5,20,15,30};
    pair<int,int> p=checkTwoSum(arr,5,35);
    cout<<p.first<<",";
    cout<<p.second;
    return 0;
}