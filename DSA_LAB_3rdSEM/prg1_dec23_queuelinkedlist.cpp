#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
int data;
node *pre;
node *next;
};
class dll{
public:
node *head;
dll(){
head=NULL;
}
void insert_at_beg(int n){
if(head==NULL){
head=new node();
head->data=n;
head->next=NULL;
return;
}
node *p=new node();
p->data=n;
p->next=head;
head->pre=p;
head=p;
}
void insert_at_end(int n){
if(head==NULL){
head=new node();
head->data=n;
head->next=NULL;
return;
}
node *p=new node(),*t=head;
while(t->next!=NULL)
t=t->next;
p->data=n;
p->pre=t;
t->next=p;
}
void show(){
if(head==NULL){
cout<<"UNDERFLOW "<<endl;
return;
}
for(node *t=head;t!=NULL;t=t->next)
cout<<t->data<<" ";
cout<<endl;
}
void delete_last(){

if(head==NULL){
cout<<"Underflow.."<<endl;
return;
}
if(head->next==NULL){
head=NULL;
return;
}
node *t=head,*p;
while(t->next!=NULL)
t=t->next;
p=t->pre;
p->next=t->next;
delete t;

}
void delete_head(){
if(head==NULL){
cout<<"UNDERFLOW....."<<endl;
return;
}
if(head->next==NULL){
head=NULL;
return;
}
node *t=head;
head=head->next;
head->pre=NULL;
delete t;
}
void insert_at_pos(int n,int k){
if(k==1){
insert_at_beg(n);
return;
}
int i=1;
node *t=head,*p=new node();
p->data=n;
while(t->next!=NULL && i<k){
t=t->next;
i++;
}
if(t->next==NULL && i==k-1){
p->pre=t;
t->next=p;
return;
}
if(t->next==NULL && i<k-1)
return;
node *q=t->pre;
q->next=p;
p->pre=q;
p->next=t;
t->pre=p;
}
void delete_pos(int k){
if(head==NULL){
cout<<"Underflow..."<<endl;
return;
}
if(k==1){
delete_head();
return;
}
node *t=head,*p,*q;
int i=1;
while(t!=NULL && i<k){
t=t->next;
i++;
}

if(t==NULL){
cout<<"POSITIon NOT FOUND....."<<endl;
return;
}
if(t->next==NULL){
p=t->pre;
p->next=NULL;
free(t);
return;
}
p=t->pre;
q=t->next;
p->next=q;
q->pre=p;
delete t;
}
};
int main(void){
dll a;
a.insert_at_end(1);
a.insert_at_beg(0);
a.insert_at_end(2);
a.insert_at_beg(-7);
a.show();
a.delete_pos(1);
a.show();
}
