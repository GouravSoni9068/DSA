#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
        int *arr;
        int size;
        int top;
        stack(int capacity)
        {
            arr=new int[capacity];
            this->size=capacity;
            this->top=-1;
        }

        void push(int val)
        {
            if(top==size-1)
            {
                cout<<"Stack Overflow"<<endl;
            }
            top++;
            arr[top]=val;
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Stack Underflow"<<endl;
                return;
            }
            top--;
        }
        int getSize()
        {
            return top+1;
        }
        bool isEmpty()
        {
            if(top==-1)
            {
                return true;
            }
            return false;
        }
        int getTop()
        {
            if(top==-1)
            {
                cout<<"stack is Empty"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }
        void print()
        {
            for(int i=0;i<=size;i++)
            {
                cout<<arr[i]<<"   ";
            }
            cout<<endl;
        }


};
int main()
{
    stack st(5);
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout<<st.size<<endl;
    // cout<<st.top<<endl;
    // cout<<st.getTop()<<endl;
    // st.pop();
    // cout<<st.getTop()<<endl;
    st.print();
    return 0;
}