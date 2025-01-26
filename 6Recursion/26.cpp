#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> arr,int i)
{
    if(i==arr.size())
    {
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,i+1);
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    print(arr,0);
    return 0;
}