#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
void push(int value)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=head;
newnode->prev=NULL;
head=newnode;
}
void end(int value)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
struct node *last=head;
while(last->next!=NULL)
last=last->next;
if(head==NULL)
{
head->prev=NULL;
head=newnode;
return;
}
newnode->prev=last;
last->next=newnode;
}
void insert(int pos,int value)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
struct node *temp=head;
int i=1;
while(i<pos)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
newnode->prev=temp;
if(temp!=NULL)
newnode->next->prev=newnode;
}
void del_beg()
{
struct node *temp;
if(head==NULL)
{
return;
}
else
{
  temp=head;
  head=head->next;
  head->prev=NULL;
  free(temp);
}
}
void del_end()
{
struct node *temp;
if(head==NULL)
{
return;
}
else
{
temp=head;
while(temp->next!=NULL)
temp=temp->next;
struct node *tail=temp;
tail=tail->prev;
tail->next=NULL;
free(temp);
}
}
void del_pos(int pos)
{
int i=1;
struct node *temp;
temp=head;
while(i<pos)
{
temp=temp->next;
i++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
void display()
{
struct node *temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
int main()
{
cout<<"1 for insert element at begining:"<<"\n";
cout<<"2 for insert element at end:"<<"\n";
cout<<"3 for display:"<<"\n";
cout<<"4 for delete beg:"<<"\n";
cout<<"5 for delete end:"<<"\n";
cout<<"6 for exit:"<<"\n";
while(1)
{
cout<<"\nenter your choice\n";
int a,b;
cin>>a;
switch(a)
{
case 1:
cout<<"enter the element:"<<"\n";
cin>>b;
push(b);
break;
case 2:
cout<<"enter the element:"<<"\n";
cin>>b;
end(b);
break;
case 3:
display();
break;
case 4:
del_beg();
break;
case 5:
del_end();
break;
default:
exit(0);
}
}
}
