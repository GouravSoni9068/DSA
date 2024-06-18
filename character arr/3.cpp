// replace char


#include<iostream>
using namespace std;

void replaceChar(char arr[],int size,char originalchar,char newchar)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==originalchar)
        {
            arr[i]=newchar;
        }
    }
}

int main()
{
    char arr[1000];
    cin>>arr;
    replaceChar(arr,1000,'@',' ');
    cout<<arr<<endl;

    
    return 0;
}