#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *next;
};
node *head=NULL;
void push(int val)
{
node *temp=new node();
temp->data=val;
temp->next=head;
head=temp;
}
void insert_end(int val)
{
node *temp=head;
node *ptr=new node();
ptr->data=val;
if(head==NULL)
{
push(val);
return;
}
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
}
void del_beg()
{
if(head==NULL)
{
cout<<"list is empty:"<<endl;
return;
}
node *temp=head;
head=head->next;
free(temp);
}
void del_end()
{
if(head==NULL)
{
cout<<"list is empty:"<<endl;
return;
}
node *temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
node *end=temp->next;
temp->next=NULL;
free(end);
}
void del_item(int val)
{
node *temp=head;
while(temp->next->data!=val && temp!=NULL)
{
temp=temp->next;
}
node *pos=temp->next;
temp->next=pos->next;
free(pos);
}
void reverse()
{
node *prevnode=NULL;
node *currnode=head;
node *nextnode=NULL;
while(currnode!=NULL)
{
nextnode=currnode->next;
currnode->next=prevnode;
prevnode=currnode;
currnode=nextnode;
}
head=prevnode;
}
void print()
{
node *temp=head;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
}
int main()
{
insert_end(23);
push(10);
push(20);
push(40);
push(50);
insert_end(30);
print();
cout<<endl;
del_item(20);
print();
reverse();
cout<<endl;
print();
}
