#include<iostream>
#include<stack>
using namespace std;
bool isSorted(stack<int> &st,int ele1=INT8_MAX)
{
    // bool ans=false;

    if(st.empty())
    {
        return true;
    }

    int ele2=st.top();
    st.pop();

    if(ele1>ele2)
    {
        return (isSorted(st,ele2));
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
    st.push(40);
    st.push(50);
    cout<<isSorted(st)<<endl;
    return 0;
}