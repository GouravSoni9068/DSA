#include<iostream>
using namespace std;
class deque{
    int* arr;
    int size;
    int front;
    int back;
    public:
        deque(int size)
        {
            arr=new int[size];
            this->size=size;
            front=-1;
            back=-1;
        }
        void pushFront(int ele)
        {
            if(front==-1)
            {
                back++;
                front++;
                arr[back]=ele;
                return;
            }
            else if(front==0)
            {
                cout<<"Queue FULL"<<endl;
                return;
            }
            front--;
            arr[front]=ele;
        }
        void pushBack(int ele)
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
        void popFront()
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
        void popBack()
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
            back--;
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
        bool isEmpty()
        {
            if(front==-1)
            {
                return true;
            }
            return false;
        }


};
int main()
{
    deque d(10);
    d.pushFront(10);
    d.pushFront(20);
    d.pushFront(30);
    cout<<d.getFront()<<endl;
    cout<<d.getBack()<<endl;
    cout<<d.getSize()<<endl;
    d.popBack();
    d.popBack();

    return 0;
}