#include<iostream>
#include<stack>
using namespace std;
bool isSorted(stack<int> &st)
{
    if(st.size()==1)
    {
        return true;
    }
    int ele=st.top();
    st.pop();
    if(ele>=st.top())
    {
        return isSorted(st);
    }
    else{
        return false;
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(60);
    st.push(50);
    cout<<isSorted(st)<<endl;
    return 0;
}