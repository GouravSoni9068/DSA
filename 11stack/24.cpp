#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>& st,int ele)
{
    if(st.empty() or ele>=st.top())
    {
        st.push(ele);
        return;
    }
    int val=st.top();
    st.pop();
    insertSorted(st,ele);
    st.push(val);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);
    int ele=50;
    insertSorted(st,ele);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}