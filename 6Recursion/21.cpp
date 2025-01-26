#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> arr,int n)
{
    if(n==1 or n==0)
    {
        return true;
    }
    if(arr[n-1]>=arr[n-2])
    {
        return isSorted(arr,n-1);
    }
    return false;
}
int main()
{
    vector<int> arr={1,2,8,4,5};
    cout<<isSorted(arr,5);
    return 0;
}