#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKgroup(queue<int> &q,int k,int size)
{
    int n=q.size();
    if(size<k)
    {
        while(size)
        {
            q.push(q.front());
            q.pop();
            size--;
        }
        return;
    }
    stack<int> st;
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    reverseKgroup(q,k,size-k);
}
int main()
{
    queue<int> q;
    q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
    // q.push(7);
    // q.push(8);
    // q.push(9);
    int k=3;
    reverseKgroup(q,k,q.size());
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}