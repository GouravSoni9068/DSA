#include<iostream>
#include<vector>
using namespace std;
int maxi(vector<int> arr,int i,int maxValue=0)
{
    if(i==arr.size())
    {
       
        return maxValue;
    }
    if(arr[i]>maxValue)
    {
        maxValue=arr[i];
    }
    return maxi(arr,i+1,maxValue);
}
int main()
{
    vector<int> arr={30,40,120,90,5};
    cout<<maxi(arr,0);
    return 0;
}