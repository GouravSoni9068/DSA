#include<iostream>
#include<vector>
using namespace std;
void missingElement(vector<int>& arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]>0)
        {
            arr[abs(arr[i])-1]*=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            cout<< i+1<<" ";
        }   
    }
}

int main()
{
    vector<int> arr={3,3,3,3,3};
    missingElement(arr,5);
    return 0;
}