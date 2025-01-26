// upper -> lower
// lower -> upper 


#include<iostream>
using namespace std;

void lowerToupper(char arr[],int size)
{
    for(int i=0;arr[i]!='\0';i++)
    {
        arr[i]=arr[i]-'a'+'A';
    }
}

int main()
{
    char arr[100];
    cin.getline(arr,100);
    cout<<arr<<endl;
    lowerToupper(arr,100);
    cout<<arr;
    return 0;
}