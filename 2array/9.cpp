#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={0,1,1,0,0,1,1};
    // int countZero=0;
    // int countOne=0;
    // for(int i=0;i<7;i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         countZero++;
    //     }
    //     else{
    //         countOne++;
    //     }
    // }
    // int i=0;
    // for(i=0;i<countZero;i++)
    // {
    //     arr[i]=0;
    // }
    // for(int j=i;j<7;j++)
    // {
    //     arr[j]=1;
    // }
    sort(arr,arr+7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}