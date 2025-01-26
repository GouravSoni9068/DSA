#include<iostream>
#include<vector>
using namespace std;
void subset(string str,int pos,string ans)
{
    if(pos>=str.size())
    {
        cout<< ans<<"         ";
        return;
    }
    subset(str,pos+1,ans+str[pos]);
    subset(str,pos+1,ans);
}

int main()
{
    string str="abc";
    subset(str,0,"");    
    return 0;
}