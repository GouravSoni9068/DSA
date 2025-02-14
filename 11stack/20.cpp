#include<iostream>
#include<stack>
using namespace std;
void findMid(stack<int> &st,int mid,int* ans)
{
    if(mid==0)
    {
        *ans= st.top();
        return;
    }
    int ele=st.top();
    st.pop();
    findMid(st,mid-1,ans);
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
    int mid=st.size()/2;
    int ans;
    findMid(st,mid,&ans);
    cout<<ans<<endl;
    cout<<st.top()<<endl;
    
    return 0;
}