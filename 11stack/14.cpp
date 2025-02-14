#include<iostream>
#include<stack>
using namespace std;
void addedSorted(stack<int>& st,int e)
{
    if(e>st.top())
    {
        st.push(e);
        return;
    }
    int ele=st.top();
    st.pop();
    addedSorted(st,e);
    st.push(ele);
}
void print(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int ele=23;
    print(st);
    addedSorted(st,ele);
    print(st);
    return 0;
}