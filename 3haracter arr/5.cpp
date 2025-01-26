// reverse 

#include<iostream>
using namespace std;
int getSize(char arr[],int size)
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reverseArr(char arr[],int size)
{
    int n= getSize(arr,size);
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}

int main()
{
    char arr[100];
    cin>>arr;
    reverseArr(arr,100);
    cout<<arr;
    
    return 0;
}