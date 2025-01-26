#include<iostream>
using namespace std;
void lastoccurence(string str,int index,int size,int ch,int& ans)
{
    if(index<0)
    {
        return;
    }
    if(str[index]==ch)
    {
        ans=index;
        return;
    }
    lastoccurence(str,index-1,size,ch,ans);
}
int main()
{
    // str.sort();
    string str="abcddedf";
    char x='d';
    int ans;
    lastoccurence(str,str.size()-1,str.size(),x,ans);
    cout<<ans<<endl;
    return 0;
}