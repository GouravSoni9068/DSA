#include<iostream>
using namespace std;
class dqCircular{
    int* arr;
    int size;
    int front;
    int rear;
    public:
        dqCircular(int size)
        {
            arr=new int[size];
            this->size=size;
            front=-1 ;
            rear=-1;
        }
        void pushFront(int ele)
        {
            if(front==-1 and rear==-1)
            {
                front=rear=0;
                arr[front]=ele;
                return;
            }
            if((rear+1)%size==front)
            {
                cout<<"OverFlow"<<endl;
                return;
            }
            if(front-1==-1)
            {
                front=size-1;
                arr[front]=ele;
                return;
            }
            front--;
            arr[front]=ele;
        }
        void pushBack(int ele)
        {
            if(front==-1 and rear==-1)
            {
                front=rear=0;
                arr[front]=ele;
                return;
            }
            if((rear+1)%size==front)
            {
                cout<<"OverFlow"<<endl;
                return;
            }
            rear=(rear+1)%size;
            arr[rear]=ele;
        }
        void popFront()
        {
            if(front==-1 and rear==-1 )
            {
                cout<<"UnderFlow"<<endl;
                return;
            }
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            front=(front+1)%size;
        }
        void popBack()
        {
            if(front==-1 and rear==-1 )
            {
                cout<<"UnderFlow"<<endl;
                return;
            }
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            if(rear==0 )
            {
                rear=size-1;
                return;
            }
            rear=rear-1;

        }
        int getFront()
        {
            if(front==-1 and rear==-1 )
            {
                return -1;
            }
            return arr[front];
        }
        int getRear()
        {
            if(front==-1 and rear==-1 )
            {
                return -1;
            }
            return arr[rear];
        }
        int getSize()
        {
            if(front==-1 and rear==-1)
            {
                return 0;
            }
            if(front>rear)
            {
                return size-front+rear+1;
            }
            return rear-front+1;
        }

};
int main()
{
    dqCircular dq(5);
    dq.pushFront(20);
    dq.pushBack(30);
    dq.pushFront(40);
    dq.pushBack(50);
    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
    return 0;
}