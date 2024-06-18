#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr1[100];
    cin>>arr1;
    char arr2[100];
    cin>>arr2;
    cout<<strlen(arr1)<<endl;
    cout<< strcat(arr1,arr2)<<endl;

    return 0;
}