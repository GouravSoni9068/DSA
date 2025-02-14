#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data)
        {
            this->data=data;
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
        int getLength()
        {
            node* temp=head;
            int len=0;
            while(temp!=NULL)
            {
                len++;
                temp=temp->next;
            }
            return len;
        }
        void InsertAtHaed(int val)
        {
            node* newNode=new node(val);
            if(head==NULL and tail==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else {
                newNode->next=head;
                head=newNode;
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
                tail=newNode;
            }
        }
        void insertAtPos(int n,int val)
        {
            node*newNode=new node(val);
            if(n==1)
            {
                InsertAtHaed(val);
            }
            else{
                node* temp1=head;
                for(int i=0;i<n-2;i++)
                {
                    temp1=temp1->next;
                }
                
                newNode->next=temp1->next;
                temp1->next=newNode;
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
        int search(int n)
        {
            node* temp=head;
            int pos=1;
            while(temp!=NULL)
            {
                if(temp->data==n)
                {
                    return pos;
                }
                temp=temp->next;
                pos++;
            }
            return -1;
        }

        // void deleteNode(int pos)
        // {
        //     node* temp=head;
        //     if(head==tail)
        //     {
        //         head=NULL;
        //         tail=NULL;

        //     }
        //     else if(pos==1)
        //     {
        //         head=head->next;
        //         temp->next=NULL;
        //         delete temp;
        //     }
        //     else{
        //         for(int i=0;i<pos-2;i++)
        //         {
        //             temp=temp->next;
        //         }
        //         node* temp1=temp->next;

        //         temp->next=temp->next->next;
        //         temp1->next=NULL;
        //         delete temp1;
        //     }
        // }
        void deleteNode(int val)
        {
            node* temp=head;
            if(temp->data==val)
            {
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
            else{

                while(temp!=NULL and temp->next!=NULL)
                {
                    if(temp->next->data==val)
                    {
                        node* temp1=temp->next;
                        temp->next=temp->next->next;
                        temp1->next=NULL;
                        delete temp1;
                    }
                    temp=temp->next;
                }
            }
        }

};

int main()
{
    linkedList* ll=new linkedList;
    ll->InsertAtHaed(10);
    ll->insertAtTail(15);
    ll->insertAtTail(50);
    // ll->print();
    ll->InsertAtHaed(18);
    ll->InsertAtHaed(100);
    // ll->print();
    ll->insertAtPos(4,6);
    ll->print();


    ll->deleteNode(50); 
    ll->print();
    
    
    return 0;
}


