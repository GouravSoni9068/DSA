#include<iostream>
#include<stack>

using namespace std;
void insertAtBottom(stack<int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    
    int elementTop=st.top();

    st.pop();
    insertAtBottom(st,ele);

    st.push(elementTop);
}
void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,ele);

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
    print(st);
    reverseStack(st);
    print(st);

    

    return 0;
}