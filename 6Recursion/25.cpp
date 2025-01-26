#include<iostream>
using namespace std;
void perm(string str,int i)
{
    if(i==str.size()-1)
    {
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<str.size();j++)
    {
        swap(str[i],str[j]);
        perm(str,i+1);
        swap(str[i],str[j]);
    }
}
int main()
{
    string str="abc";
    perm(str,0);
    return 0;
}