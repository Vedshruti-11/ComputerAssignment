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
    int isFull();
    int isEmpty();

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
int isFull()
{
    if((rear+1)%SIZE==fron)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(rear==fron)
        return 1;
    else
        return 0;
}
void enQueue()
{
    int num;
    if(isFull())
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
    if(isEmpty())
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
    int i;
    if(isEmpty())
        cout<<"The queue is empty";
    else
    {
        if(rear>=fron+1)
        {
          cout<<"\n element in the queue:";
          for(i=fron;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
        }
        else
        {
            for(i=fron;i<=SIZE;i++)
                cout<<q[i]<<" ";
            for(i=0;i<=rear;i++)
                cout<<q[i]<<" ";
            cout<<"\n";
        }

    }
}

