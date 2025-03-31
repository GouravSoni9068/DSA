#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(30);
    pq.push(1);
    pq.push(15);
    pq.push(100);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(15);
    // pq.push(5);
    // pq.push(30);
    // pq.push(100);
    // // cout<<pq.size()<<endl;

    // while(!pq.empty())
    // {
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }
    return 0;
}


