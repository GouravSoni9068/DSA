#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int>& st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topEle=st.top();
    st.pop();
    insertBottom(st,ele);
    st.push(topEle);
}
void reverse(stack<int>& st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertBottom(st,ele);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // while(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}