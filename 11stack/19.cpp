#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str="Gourav";
    stack<char> st;
    for(int i=0;i<str.size();i++)
    {
        st.push(str[i]);

    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}