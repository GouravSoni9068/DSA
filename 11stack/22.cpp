#include<iostream>
#include<stack>
using namespace std;
bool isSorted(stack<int> st)
{
    if(st.size()==0 or st.size()==1)
    {
        return true;
    }
    int ele=st.top();
    st.pop();
    if(ele>=st.top())
    {
        return isSorted(st);
        
    }
    return false;
    
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(430);
    st.push(50);
    cout<<isSorted(st);
    return 0;
}