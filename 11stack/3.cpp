#include<iostream>
using namespace std;
class stack{
    public:
        int* arr;
        int size;
        int top;
        stack(int capacity)
        {
            arr=new int[capacity];
            size=capacity;
            top=-1;
        }
        void push(int val)
        {
            if(top==size-1)
            {
                cout<<"Over Flow"<<endl;
                return;
            }
            top++;
            arr[top]=val;

        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Under Flow"<<endl;
                return;
            }
            top--;
        }
        int getsize()
        {
            return top+1;
        }
        int gettop()
        {
            if(top==-1)
            {
                return -1;
            }
            return arr[top];
        }
        bool empty()
        {
            if(top==-1)
            {
                return true;
            }
            return false;
        }
        void print()
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    stack* st=new stack(5);
    // st->push(10);
    // st->push(20);
    // st->push(30); 
    // st->pop();
    // cout<<st->gettop()<<endl;
    // cout<<st->empty();
    st->push(10);
    st->push(10);
    st->push(10);
    st->push(10);
    st->push(10);
    st->push(10);
    st->print();

    return 0;
}