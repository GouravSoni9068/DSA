#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val)
        {
            data=val;
            left=NULL;
            right=NULL;
        }
};
Node* createTree()
{
    int val;
    cout<<"Enter the value for Node: ";
    cin>>val;
    if(val==-1)
    {
        return NULL;
    }
    else{
        Node* root=new Node(val);
        cout<<"adding left side of the "<<val<<endl;
        root->left=createTree();
        cout<<"adding right side of the "<<val<<endl;
        root->right=createTree();
        return root;
    }
}
void preOrderTraversal(Node* root)
{
    // NLR
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root)
{
    // LNR
    if(root==NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<"  ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root)
{
    // LRN
    if(root==NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<"  ";
}
void levelOrderTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            cout<<endl;
             
            q.pop();
            if(!q.empty())
            {
                
                q.push(NULL);
            }
            else{
                return;
            }
        }
        cout<<q.front()->data<<"  ";
        
        if(q.front()->left!=NULL)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right!=NULL)
        {
            q.push(q.front()->right);
        }
        q.pop();
    }
    
    
}
int main()
{
    Node* root=createTree();
    if(root==NULL)
    {
        cout<<"Empty Tree";
        return 0;
    }
    // preOrderTraversal(root);
    // cout<<endl;
    // inOrderTraversal(root);
    // cout<<endl;
    // postOrderTraversal(root);
    // cout<<endl;
    
    levelOrderTraversal(root);
    return 0;
}

// 10 20 40 -1 -1 50 -1 80 -1 -1 30 60 -1 -1 70 -1 90 -1 -1