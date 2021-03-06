#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

bool isEmpty(Node *head)
{
    return (head==NULL);
}

int peek(Node *head)
{
    if(head==NULL)
    {
        cout<<"Queue is empty:"<<"\n";
        return INT_MAX;
    }
    return (head->data);
}

Node *push(int val,Node *head)
{
    if(head==NULL)
    {
        head=new Node();
        head->data=val;
        return head;
    }
    Node *temp=head;

    Node *newnode=new Node();

    newnode->data=val;

    while(head->next!=NULL)
    head=head->next;

    head->next=newnode;
    //newnode->next=NULL;
    return temp;
}



Node *pop(Node *head)
{
    if(head==NULL)
    return head;

    Node *temp=head;

    head=head->next;

    free(temp);
    return head;
}


/*Node *pop(Node *head)
{
    head=delAtFirst(head);
    return head;
}*/

void printQueue(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"\n";
        head=head->next;
    }
}


int main()
{
    Node *head=NULL;
    int choice,val;

    while(1)
    {
        cout<<"1 for push element:"<<"\n";
        cout<<"2 for pop element:"<<"\n";
        cout<<"3 for check isempty condition:"<<"\n";
        cout<<"4 for peek element:"<<"\n";
        cout<<"5 for print the queue:"<<"\n";
        cout<<"Instead of these number press any number for stop the program:"<<"\n";
        cout<<"Enter the choice:"<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the value:"<<"\n";
            cin>>val;
            head=push(val,head);
            break;
            case 2:
            head=pop(head);
            break;
            case 3:
            if(isEmpty(head))
            {
                cout<<"Queue is empty:"<<"\n";
            }
            else
            {
                cout<<"Queue is not empty:"<<"\n";
            }
            break;
            case 4:
            cout<<peek(head)<<"\n";
            break;
            case 5:
            printQueue(head);
            break;
            default:
            return 0;
        }
    }
}
