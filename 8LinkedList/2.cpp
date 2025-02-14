#include<iostream>
using namespace std;


class node{
    public:
        node* prev;
        int data;
        node* next;

        node(int val)
        {
            prev=NULL;
            data=val;
            next=NULL;
        }

};
class linkedList{
    public:
        node* head;
        node* tail;
        linkedList()
        {
            head=NULL;
            tail=NULL;

        }
        int length()
        {
            node* temp=head;
            int count=0;
            while(temp!=NULL)
            {
                count++;
                temp=temp->next;
            }
            return count;
        }
        void insertAtHead(int val)
        {
            node* newNode=new node(val);
            if(head==NULL and tail==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else{
                newNode->next=head;
                head->prev=newNode;
                head=head->prev;
            }
        }
        void insertAtTail(int val)
        {
            node* newNode=new node(val);
            if(head==NULL and tail==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                newNode->prev=tail;
                tail=tail->next;
            }
        } 
        void insertAtPos(int pos,int val)
        {
            node* newNode=new node(val);
            if(pos<1 or pos>length()+1)
            {
                return;
            }
            else if(pos==1)
            {
                insertAtHead(val);
            }
            else if(pos==length()+1)
            {
                insertAtTail(val);
            }
            else{
                node* temp=head;
                for(int i=0;i<pos-2;i++)
                {
                    temp=temp->next;
                }
                newNode->next=temp->next;
                temp->next=newNode;
                newNode->prev=temp;
                newNode->next->prev=newNode;
            }
        }
        void print()
        {
            node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
        void deleteNode(int num)
        {
            node* temp=head;
            
            if(num==1)
            {
                head=head->next;
                temp->next=NULL;
                head->prev=NULL;
                delete temp;
            }
            else if(num==length())
            {
                for(int i=0;i<num-2;i++)
                {
                    temp=temp->next;
                }
                node* temp1=temp->next;
                temp->next=NULL;
                tail=temp;
                temp1->prev=NULL;
                delete temp1;

            }
            else{
                for(int i=0;i<num-2;i++)
                {
                    temp=temp->next;
                }
                node* temp1=temp->next;
                temp->next=temp->next->next;
                temp->next->prev=temp1->prev;
                temp1->prev=NULL;
                temp1->next=NULL;
                delete temp1;
            }
        }

        int search(int val)
        {
            node* temp=head;
            int count=1;
            while(temp!=NULL)
            {
                if(temp->data==val)
                {
                    return count;
                }
                count++;
                temp=temp->next;
            }
            return -1;
        }
};
int main()
{
    linkedList ll;
    ll.insertAtHead(10);
    // ll.insertAtHead(20);
    // ll.insertAtHead(30);
    // ll.insertAtHead(40);
    // ll.insertAtTail(40);
    // ll.insertAtTail(50);
    // ll.insertAtTail(60);
    ll.print();
    // ll.deleteNode(7);
    // ll.print();
    // ll.insertAtPos(40,50);
    // ll.print();
    // cout<<ll.search(500)<<endl;
    ll.deleteNode(1);
    ll.print();

    
    return 0;
}