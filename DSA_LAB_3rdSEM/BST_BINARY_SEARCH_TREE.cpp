#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int c=0;
struct node{
    int data;
    struct node *left,*right;
};

struct node *create()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    newnode->data=x;
    cout<<"Enter the left node of "<<x<<" :\n";
    newnode->left=create();
    cout<<"Enter the right node of "<<x<<" :\n";
    newnode->right=create();
    return newnode;
}

struct node *getnew(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insert(struct node *root,int key)
{
    if(root==NULL)
    {
        return getnew(key);
    }
    else if(key<=root->data)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}

bool search(struct node *root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==key)
    {
        return true;
    }
    else if(key<=root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}

struct node *FindMin(struct node *root)
{
    while(root->left!=NULL)
    root=root->left;
    return root;
}
struct node *Delete(struct node *root,int data)
{
    if(root==NULL)
    return root;
    else if(data<root->data)
    root->left=Delete(root->left,data);
    else if(data>root->data)
    root->right=Delete(root->right,data);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
        delete root;
        root=NULL;
        }
        else if(root->left==NULL)
        {
            struct node *temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root;
            root=root->right;
            delete temp;
        }
        else
        {
            struct node *temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
}

int smallest(struct node *root)
{
    struct node *temp=root;
    while(temp!=NULL && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
int count_node(struct node *root)
{
    if(root!=NULL)
    {
        count_node(root->left);
        c++;
        count_node(root->right);
    }
    return c;
}

int largest(struct node *root)
{
    struct node *temp=root;
    while(temp!=NULL && temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}

int count_internal(struct node *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    return 0;
    return 1+count_internal(root->left)+count_internal(root->right);
}

int height(struct node *root)
{
    if(root==NULL)
    return -1;
    return max(height(root->left),height(root->right))+1;
}

void postorder(struct node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void preorder(struct node *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    struct node *root=NULL;
    cout<<"Enter the main root: ";
    root=create();

    int a,b;
    while(1)
    {
        cout<<"\n*******-----------BST-----------*******\n";
        cout<<"1 for insert\n";
        cout<<"2 for delete\n";
        cout<<"3 for inorder\n";
        cout<<"4 for preorder\n";
        cout<<"5 for postorder\n";
        cout<<"6 for search\n";
        cout<<"7 for largest element\n";
        cout<<"8 for smallest element\n";
        cout<<"9 for internal nodes\n";
        cout<<"10 for external nodes\n";
        cout<<"11 for total nodes\n";
        cout<<"12 for end\n";
        cout<<"Enter choice: ";
        cin>>a;
        switch(a)
        {
            case 1:
            cout<<"Enter the element: ";
            cin>>b;
            insert(root,b);
            break;
            case 2:
            cout<<"Enter the element: ";
            cin>>b;
            Delete(root,b);
            break;
            case 3:
            cout<<"Inorder Traversal: ";
            inorder(root);
            break;
            case 4:
            cout<<"Preorder Traversal: ";
            preorder(root);
            break;
            case 5:
            cout<<"Postorder Traversal: ";
            postorder(root);
            break;
            case 6:
            cin>>b;
            if(search(root,b))
            cout<<"Element in the list"<<"\n";
            else
            cout<<"Element not in the list"<<"\n";
            break;
            case 7:
            cout<<"The largest element is: "<<largest(root)<<"\n";
            break;
            case 8:
            cout<<"The smallest element is: "<<smallest(root)<<"\n";
            break;
            case 9:
            cout<<"The total number of internal nodes is: "<<count_internal(root)<<"\n";
            break;
            case 10:
            cout<<"The total number of external nodes is: "<<(count_node(root)-count_internal(root))<<"\n";
            break;
            case 11:
            cout<<"The total number of nodes is:"<<count_node(root)<<"\n";
            break;
            case 12:
            exit(0);
        }
    }
}
