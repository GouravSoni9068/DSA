#include<iostream>
using namespace std;
class stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;
        stack(int capacity)
        {
            arr=new int[capacity];
            size=capacity;
            top1=-1;
            top2=size;
        }
        void push1(int val)
        {
            if(top1+1==top2)
            {
                cout<<"OverFlow"<<endl;
                return;
            }
            top1++;
            arr[top1]=val;
        }
        void push2(int val)
        {
            if(top1+1==top2)
            {
                cout<<"OverFlow"<<endl;
                return;
            }
            top2--;
            arr[top2]=val;
        }
        void pop1()
        {
            if(top1==-1)
            {
                cout<<"Underflow"<<endl;
                return;
            }
            top1--;
        }
        void pop2()
        {
            if(top2==size)
            {
                cout<<"Underflow"<<endl;
                return;
            }
            top2--;
            
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
};
int main()
{
    stack st(6);
    st.pop1();
    st.pop2();
    st.push1(10);
    st.push1(100);
    st.push2(20);
    st.push2(30);
    st.push2(40);
    cout<<st.getTop1()<<endl;
    cout<<st.getTop2();
    // st.getsize();
    return 0;
}