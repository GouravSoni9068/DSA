#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int> arr,int target,int i)
{
    if(i==arr.size())
    {
        return false;
    }
    if(arr[i]==target)
    {
        return true;
    }
    return search(arr,target,i+1);

}

int main()
{
    vector<int> arr={10,30,50,20};
    int target=90;
    cout<<search(arr,target,0);
    return 0;
}