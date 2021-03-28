#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class CLL{
Node *last;

public:
CLL() {
last = NULL;
}
~CLL()
{
    Node *temp=NULL;
    temp=last->next;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        delete(temp);
    }

}
void addBeg(int);
void addEnd(int);
void display();
void delBeg();
void delEnd();

};

void CLL::addBeg(int item){
Node *curr = new Node;
curr->data = item;

if(last==NULL) {
curr->next = curr;
last = curr;
return;
}

curr->next = last->next;
last->next = curr;
}

void CLL::addEnd(int item) {
Node *curr = new Node;
curr->data = item;

if(last==NULL) {
curr->next = curr;
last = curr;
return;
}

curr->next = last->next;
last->next = curr;
last = curr;
}

void CLL::display(){
if (last==NULL) {
cout << "List is empty.\n";
return;
}

Node *temp = last->next;

while(temp!=last) {
cout << temp->data << "->";
temp = temp->next;
}

cout << temp->data << endl;
}

void CLL::delBeg() {
if (last==NULL) {
cout << "List is empty.\n";
return;
}

if (last->next == last) {
delete last;
last = NULL;
return;
}

Node *temp = last->next;
last->next = temp->next;
delete (temp);
}

void CLL::delEnd() {
if (last==NULL) {
cout << "List is empty.\n";
return;
}

if (last->next == last) {
delete last;
last = NULL;
return;
}

Node *temp = last->next;
while(temp->next != last) temp = temp->next;
temp->next = last->next;
delete (last);
last = temp;
}

int main()
{
    CLL cll;
    int option,val;
    while(1)
    {
        cout<<"1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Display\n6.Enter any key to Exit";
        cout<<"\nEnter your choice: ";
        cin>>option;
        if(option==1){
            cin>>val;cll.addBeg(val);}
        else if(option==2){
            cin>>val;cll.addEnd(val);}
        else if(option==3){
            cll.delBeg();}
        else if(option==4){
            cll.delEnd();}
        else if(option==5){
            cll.display();}
        else
            break;
    }
    return 0;
}


