#include<iostream>
#include<vector>
using namespace std;
int mini(vector<int> arr,int m,int i=0)
{
    if(i==arr.size())
    {
        return m;
    }
    if(arr[i]<m)
    {
        m=arr[i];
    }
    return min(m, mini(arr,m,i+1));
}
int main()
{
    vector<int> arr={10,20,50,5,9,100};
    cout<<mini(arr,INT8_MAX);
    return 0;
}