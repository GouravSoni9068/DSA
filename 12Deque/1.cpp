#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // queue<int> q;
    // q.push(30);
    // q.push(20);
    // q.push(10);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.size()<<endl;
    // cout<<q.empty()<<endl;


    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
    cout<<d.empty()<<endl;
    cout<<d.at(3);
    
    return 0;
}