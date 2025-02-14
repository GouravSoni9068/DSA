#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* nextptr;
        Node(int x)
        {
            val=x;
            nextptr=NULL;
        }
};
int main()
{
    Node* newNode=new Node(3);
    
    cout<<newNode->val<<endl;
    Node* node=new Node(5);
    newNode->nextptr=node;
    cout<<newNode->nextptr->val<<endl;
    return 0;
}