#include<iostream>
#include<stack>
using namespace std;
void func(stack<int> &st,int mid,int i=0)
{
    if(i==mid)
    {
        cout<<st.top()<<endl;
        return;
    }
    int a=st.top();
    st.pop();
    func(st,mid,i+1);
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
    // st.push(60);
    // st.push(70);
    cout<<endl;
    int mid=st.size()/2;
    func(st,mid);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}