#include<iostream>
#include<vector>
using namespace std;
void printSubstring(string str,vector<string> &ans,int index=0,string output="")
{
    if(index==str.length())
    {
        ans.push_back(output);
        return;
    }
    printSubstring(str,ans,index+1,output+str[index]);
    printSubstring(str,ans,index+1);
}
int main()
{
    string str="abc";
    vector<string> ans;
    printSubstring(str,ans);
    cout<<ans.size();
    return 0;
}