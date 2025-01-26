#include<iostream>
using namespace std;

int main()
{
    // char arr[100];
    // cout<<"Enter your name: ";
    // cin>>arr;
    // cin.getline(arr,9);
    // cout<<"Your name is "<<arr<<endl;
    // cout<<arr.size();


    char arr[100];
    cout<<"Enter input: ";
    // cin>>arr;
    cin.getline(arr,10,'A');
    cout<<arr<<endl;

    return 0;
}