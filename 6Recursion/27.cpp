#include<iostream>
#include<vector>
using namespace std;
bool find(vector<int> arr,int target,int i)
{
    if(i==arr.size())
    {
        return false;
    }
    if(arr[i]==target)
    {
        // cout<<i;
        return true;
    }
    return find(arr,target,i+1);
}
int main()
{
    vector<int> arr={10,30,50,40,0};
    int target=30;
    cout<<find(arr,target,0);
    return 0;
}