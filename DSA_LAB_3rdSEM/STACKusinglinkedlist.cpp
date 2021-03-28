
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head;
int c=0;

void push(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp->data=data;

    temp->next=head;

    head=temp;
    c++;

}

bool isEmpty()
{
    return (head==NULL);
}

bool isFull()
{
    return (c==10);
}

void pop()
{
    if(isEmpty())
    {
        cout<<"underflow:"<<"\n";
        return;
    }
    struct node *temp=head;
    head=head->next;
    free(temp);
}

void peek()
{
    struct node *temp=head;

    if(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        free(temp);
        return;
    }
    cout<<"Stack is empty"<<endl;
    return;
}
void display()
{
    struct node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}


int main()
{

    int choice;
    int a,b;
    while(1)
    {
        cout<<"1 for push"<<"\n";
         cout<<"2 for pop"<<"\n";
          cout<<"3 for peek"<<"\n";
          cout<<"4 for display"<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the value to be pushed"<<"\n";
            cin>>a;
            push(a);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            exit(0);
        }
    }


}
