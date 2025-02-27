#include<iostream>
using namespace std;
class queue{
    int* arr;
    int size;
    int front;
    int back;
    public:
        queue(int size)
        {
            arr=new int[size];
            this->size=size;
            front =-1;
            back=-1;

        }
        void push(int ele)
        {
            if(front==-1)
            {
                back++;
                front++;
                arr[back]=ele;
                return;

            }
            else if(back==size-1)
            {
                cout<<"Queue FULL"<<endl;
                return;
            }
            back++;
            arr[back]=ele;
        }
        void pop()
        {
            if(front==-1)
            {
                cout<<"Already Empty"<<endl;
                return;
            }
            else if(front>=back)
            {
                front=-1;
                back=-1;
                return;
            }
            front++;
        }
        bool isEmpty()
        {
            if(front==-1)
            {
                return true;
            }
            return false;
        }
        int getSize()
        {
            if(front==-1)
            {
                return 0;
            }
            return back-front+1;
        }
        int getFront()
        {
            if(front ==-1)
            {
                return -1;
            }
            return arr[front];
        }
        int getBack()
        {
            if(back ==-1)
            {
                return -1;
            }
            return arr[back];
        }
};

int main()
{
    queue q(10);
    // cout<<q.getFront()<<endl;
    // cout<<q.isEmpty()<<endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // cout<<q.getFront()<<endl;
    // cout<<q.getBack()<<endl;
    // cout<<q.isEmpty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.getFront()<<endl;
    cout<<q.getBack()<<endl;
    cout<<q.getSize()<<endl;
    
    return 0;
}