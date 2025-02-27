#include<iostream>
using namespace std;
class circularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
        circularQueue(int s)
        {
            arr=new int[s];
            size=s;
            front= -1;
            rear= -1;
        }
        void push(int ele)
        {
            if((rear+1)%size==front)
            {
                cout<<"Overflow"<<endl;
                return;
            }
            if(front==-1 and rear==-1)
            {
                front=rear=0;
                arr[rear]=ele;
                return;
            }
            rear=(rear+1)%size;
            arr[rear]=ele;

        }
        void pop()
        {
            if(front==-1 and rear==-1)
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
        int getFront()
        {
            if(front==-1 and rear==-1)
            {
                return -1;
            }
            return arr[front];
        }
        int getRear()
        {
            if(front==-1 and rear==-1)
            {
                return -1;
            }
            return arr[rear];
        }
        int getSize()
        {
            if(front==-1 and rear==-1 )
            {
                return 0;
            }
            if(front>rear)
            {
                return size-front+rear+1;
            }
            return rear-front+1;
            
        }
        bool isEmpty()
        {
            return (front==-1 and rear==-1);
        }

};
int main()
{
    
    return 0;
}
