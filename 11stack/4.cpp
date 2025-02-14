#include<iostream>
using namespace std;
class stack
{
    public:
        int* arr;
        int top1;
        int top2;
        int size;
        stack(int capacity)
        {
            arr=new int[capacity];
            top1=-1;
            size=capacity;
            top2=capacity;
        }
        void push1(int val)
        {
            if(top1+1==top2)
            {
                cout<<"OverFlow 1"<<endl;
                return;
            }
            top1++;
            arr[top1]=val;
        }
        void push2(int val)
        {
            if(top1+1==top2)
            {
                cout<<"OverFlow 2"<<endl;
                return;
            }
            top2--;
            arr[top2]=val;
        }
        void pop1()
        {
            if(top1==-1)
            {
                cout<<"UnderFlow"<<endl;
                return;
            }
            top1--;
        }
        void pop2()
        {
            if(top2==size)
            {
                cout<<"UnderFlow"<<endl;
                return;
            }
            top2++;
        }
        int getSize1()
        {
            return top1+1;
        }
        int getSize2()
        {
            return size-top2;
        }
        bool isEmpty1()
        {
            if(top1==-1)
            {
                return true;
            }
            return false;
        }
        bool isEmpty2()
        {
            if(top1==size)
            {
                return true;
            }
            return false;
        }
        int getTop1()
        {
            if(top1==-1)
            {
                return -1;
            }
            return arr[top1];
        }
        int getTop2()
        {
            if(top2==size)
            {
                return -1;
            }
            return arr[top2];
        }
        int print1()
        {
            for(int i=0;i<=top1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int print2()
        {
            for(int i=size-1;i>=top2;i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    stack st(7);
    st.push1(10);
    st.print1();
    return 0;
}