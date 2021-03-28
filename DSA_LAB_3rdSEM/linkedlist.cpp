#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head=NULL;


void insertBeg(int item)
{
    Node *curr= new Node();
    curr->data=item;
    curr->next=head;
    head=curr;
}
void insertEnd(int item)
{
    Node *curr= new Node;
    curr->data=item;
    curr->next=NULL;
    if(head==NULL)
    {
        head=curr;
        return;
    }
    else
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=curr;
    }
}

void display(Node *node)
{
    cout<<"\n";
    if(node==NULL)
        cout<<"List is empty"<<endl;
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;

    }
    cout<<endl;
}
void countNodes()
{
    int counting=0;
    Node *node=head;
    while(node!=0)
    {
        node=node->next;
        counting++;
    }
    cout<<"\nThe total no of nodes is: "<<counting<<"\n";
}
void delBeg()
{
    if(head==NULL)
    {
        cout<<"List is Empty\n";
    }
    else
    {
        Node *temp=head;
        head=head->next;
        delete(temp);
    }
}

void delEnd()
{
    if(head==NULL)
        {
            cout<<"list is empty:"<<endl;
            return;
        }
    Node *temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    Node *end=temp->next;
    temp->next=NULL;
    delete(end);
}
void reverse()
{
    Node *prevnode=NULL;
    Node *currnode=head;
    Node *nextnode=NULL;
    while(currnode!=NULL)
    {
        nextnode=currnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
}
void delItem(int val)
{
    Node *temp=head;
    while(temp->next->data!=val && temp!=NULL)
        {
            temp=temp->next;
        }
    Node *pos=temp->next;
    temp->next=pos->next;
    delete(pos);
}
int main()
{
    int option,val;
    while(1)
    {
        cout<<"1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Delete an item from list\n6.Reverse\n7.Display\n8.Count no of nodes\n9.Exit";
        cout<<"\nEnter your choice: ";
        cin>>option;
        if(option==1){
            cin>>val;insertBeg(val);}
        else if(option==2){
            cin>>val;insertBeg(val);}
        else if(option==3){
            delBeg();}
        else if(option==4){
            delEnd();}
        else if(option==5){
            cin>>val;delItem(val);}
        else if(option==6){
            reverse();}
        else if(option==7){
            display(head);}
        else if(option==8){
            countNodes();}
        else
            break;
    }
    return 0;
}

