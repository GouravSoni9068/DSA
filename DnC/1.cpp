#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> arr1,vector<int> arr2)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<arr1.size() and j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
        
    }
    if(i<arr1.size())
    {
        while(i<arr1.size())
        {
            ans.push_back(arr1[i]);
            i++;
        }
    }
    else if(j<arr2.size())
    {
        while(j<arr1.size())
        {
            ans.push_back(arr1[i]);
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1={5,8,10,12};
    vector<int> arr2={1,3,7,9};
    vector<int> ans=merge(arr1,arr2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}