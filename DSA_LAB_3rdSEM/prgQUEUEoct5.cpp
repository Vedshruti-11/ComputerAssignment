#include<iostream>
#include<stdlib.h>
#define SIZE 5
using namespace std;
int q[SIZE],fron=0,rear=0;
int main()
{
    int ch;
    void enQueue();
    void deQueue();
    void display();

    while(1)
    {
        cout<<"\n 1.add element";
        cout<<"\n 2.remove element";
        cout<<"\n 3.display";
        cout<<"\n 4.exit";
        cout<<"\n enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"\n invalid choice";
        }

    }
    return 0;
}
void enQueue()
{
    int num;
    if(rear==SIZE && fron==0)
        cout<<"\n The queue is full";
    else
    {
        cout<<"\n enter the num:";
        cin>>num;
        q[rear]=num;
    }
    rear++;
}
void deQueue()
{
    int num,i;
    if(fron==rear)
        cout<<"\n The queue is empty";
    else
    {
        num=q[fron];
        fron++;
        cout<<"\n"<<num<<" removed from queue:";
    }
}
void display()
{
    int i,temp=fron;
    if(fron==rear)
        cout<<"The queue is empty";
    else
    {
        cout<<"\n element in the queue:";
        for(i=temp;i<rear;i++)
        {
            cout<<q[i]<<" ";
        }
    }
}
