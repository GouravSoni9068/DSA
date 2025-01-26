#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> arr,int i=0)
{
    if(i==arr.size()-1)
    {
        return true;
    }
    
    if(arr[i+1]<arr[i])
    {
        return isSorted(arr,i+1);
    }
    return false;
}
int main()
{
    vector<int> arr={50,40,300,20,10};
    cout<<isSorted(arr);
    return 0;
}