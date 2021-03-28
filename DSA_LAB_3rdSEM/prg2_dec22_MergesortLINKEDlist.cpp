#include <bits/stdc++.h>

using namespace std;

struct node {

    int data;
    node* next;
};

void setData(node* head)
{
    node* tmp;
    tmp = head;
    while (tmp != NULL) {
        if(tmp->next==NULL)
        {
            cout << tmp->data<<endl;
        }
        else
        {
            cout<<tmp->data<<"->";
        }
        tmp = tmp->next;
    }
}
node* getData(node* head, int num)
{
    node* temp = new node;
    node* tail = head;
    temp->data = num;
    temp->next = NULL;

    if (head == NULL) {

        head = temp;

        tail = temp;

    }


    else {
        while (tail != NULL) {
            if (tail->next == NULL) {
                tail->next = temp;
                tail = tail->next;
            }
            tail = tail->next;

        }
    }
    return head;
}
node* mergelists(node** head1,node** head2)
{
    node* tail = *head1;
    while (tail != NULL) {
        if (tail->next == NULL&& head2 != NULL) {
            tail->next = *head2;
            break;
        }
        tail = tail->next;
    }
    return *head1;
}

void sortlist(node** head1)
{
    node* curr = *head1;
    node* temp = *head1;
    while (curr->next != NULL) {
        temp = curr->next;
        while (temp != NULL) {

            if (temp->data < curr->data) {

                int t = temp->data;

                temp->data = curr->data;

                curr->data = t;

            }
            temp = temp->next;
        }
        curr = curr->next;
    }
}

int main()
{
    int i,val;
    node* head1 = new node;
    node* head2 = new node;
    head1 = NULL;
    head2 = NULL;
    cout<<"Enter the elements in list 1:"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>val;
        head1 = getData(head1,val);
    }
    cout<<"Enter the elements in list 2:"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>val;
        head2 = getData(head2,val);
    }
    head1 = mergelists(&head1,&head2);
    sortlist(&head1);
    setData(head1);
    return 0;
}
