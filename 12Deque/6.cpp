#include<iostream>
#include<queue>
using namespace std;
void reverse(queue<int>& q)
{
    if(q.empty())
    {
        return;
    }
    int ele=q.front();
    q.pop();
    reverse(q);
    q.push(ele);

}
void print(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q({1,2,3,4,5});
    
    print(q);
    reverse(q);
    print(q);


    return 0;
}