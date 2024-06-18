// Palindrome


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

bool IsPaindrome(char arr[],int size){
    int n=getSize(arr,size);
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(arr[start]==arr[end])
        {
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;

}

int main()
{
    char arr[100];
    cin>>arr;
    cout<<IsPaindrome(arr,100);

    
    return 0;
}