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

Node* insertVal(Node* root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }
    if(val<root->data)
    {
        root->left=insertVal(root->left,val);
    }
    else{
        root->right=insertVal(root->right,val);
    }
    return root;
}

Node* createBST()
{   
    Node* root=NULL;
    int val;
    cout<<"Enter the value of node: ";
    cin>> val;
    while(val!=-1)
    {
        root=insertVal(root,val);
        cout<<"Enter the value of node: ";
        cin>> val;

    }
    return root;

}

void preOrderTreaversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    preOrderTreaversal(root->left);
    preOrderTreaversal(root->right);
}

void inOrderTreaversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTreaversal(root->left);
    cout<<root->data<<"  ";
    inOrderTreaversal(root->right);
}

void postOrderTreaversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postOrderTreaversal(root->left);
    postOrderTreaversal(root->right);
    cout<<root->data<<"  ";
}

void LevelOrderTraversal(Node* root)
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
        else{
            if(q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            cout<<q.front()->data<<"  ";
            q.pop();
        }
    }
}

int getMin(Node* root)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->left==NULL)
    {
        return root->data;
    }
    return getMin(root->left);
}
int getMax(Node* root)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->right==NULL)
    {
        return root->data;
    }
    return getMax(root->right);
}

bool search(Node* root,int target)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==target)
    {
        return true;
    }
    if(root->data>target)
    {
        return search(root->left,target);
    }
    else{
        return search(root->right,target);
    }
}

int main()
{
    Node* root=createBST();
    // cout<<root->data;
    // printTree(root);
    cout<<endl;
    
    preOrderTreaversal(root);
    cout<<endl;
    inOrderTreaversal(root);
    cout<<endl;
    postOrderTreaversal(root);
    cout<<endl;
    LevelOrderTraversal(root);
    cout<<endl;
    
    
    cout<<"Min Value: "<< getMin(root);
    cout<<endl;
    cout<<"Max Value: "<< getMax(root);
    cout<<endl;

    cout<<search(root,200)<<endl;
    cout<<search(root,250)<<endl;
    cout<<search(root,150)<<endl;
    cout<<search(root,20)<<endl;
    cout<<search(root,70)<<endl;
    cout<<search(root,170)<<endl;

    return 0;
}
// 100 50 200 70 20 250 150 -1