#include<iostream>
#include<vector>
using namespace std;

void printEven(vector<int> arr,vector<int>& ans,int i=0)
{
    if(i==arr.size())
    {
        return;
    }
    if((arr[i]&1)==0)
    {
        ans.push_back(arr[i]);
        cout<<arr[i]<<"   ";
    }
    printEven(arr,ans,i+1);
}
int main()
{
    vector<int> arr={10,11,12,13,14,15};
    vector<int> ans;
    printEven(arr,ans);
    return 0;
}