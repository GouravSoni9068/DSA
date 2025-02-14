#include<iostream>
#include<stack>
using namespace std;
void findMiddle(stack<int> &st,int mid)
{
    if(mid==0)
    {
        cout<<st.top()<<endl;
        return;
    }
    int ele=st.top();
    st.pop();
    mid--;

    findMiddle(st,mid);
    
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
    st.push(70);
    st.push(80);
    // st.push(90);
    cout<<endl;
    int mid=st.size()/2;
    findMiddle(st,mid);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}