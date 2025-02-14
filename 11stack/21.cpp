#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int> &st,int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    int ele=st.top();
    st.pop();
    insertBottom(st,val);
    st.push(ele);

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
    insertBottom(st,75);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}