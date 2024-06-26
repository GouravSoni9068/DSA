#include<iostream>
#include<vector>
using namespace std;
vector<int> Merge(vector<int> left,vector<int> right)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<left.size() and j<right.size())
    {
        if(left[i]<right[j])
        {
            ans.push_back(left[i]);
            i++;
        }
        else{
            ans.push_back(right[j]);
            j++;
        }
    }
    if(i<left.size())
    {
        while(i<left.size())
        {
            ans.push_back(left[i]);
            i++;
        }
    }
    if(j<right.size())
    {
        while(j<right.size())
        {
            ans.push_back(right[j]);
            j++;
        }
    }
    return ans;
}
vector<int> mergeSort(vector<int> arr,int left,int right)
{
    if(left==right)
    {
        vector<int> baseCase;
        baseCase.push_back(arr[left]);
        return baseCase;
    }
    int mid=(left+right)/2;
    vector<int> l=mergeSort(arr,left,mid);
    vector<int> r=mergeSort(arr,mid+1,right);
    vector<int> mer= Merge(l,r);
    return mer;
}
int main()
{
    vector<int> arr={10,80,100,30,90,70};
    vector<int> ans=mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}