#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &st,int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    int a=st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(a);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int value=70;
    pushAtBottom(st,value);
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}