#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // st.
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    
    return 0;
}