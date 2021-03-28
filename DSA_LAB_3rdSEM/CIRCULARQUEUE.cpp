#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define size 5

class CircularQueue{
    public:
    int a[size];
    int front;
    int rear;

    CircularQueue()
    {
        front=-1;
        rear=-1;
    }

    bool isFull()
    {
        if((front==0 && rear==size-1) || front==rear+1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        return false;
    }

    void enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full:"<<"\n";
            return;
        }
        else if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            a[rear]=x;
        }
        else
        {
            rear=(rear+1)%size;
            a[rear]=x;
        }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"queue is empty:"<<"\n";
            return;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
    }

    void display()
    {
        int i=front;
        if(isEmpty())
        {
            cout<<"Queue is empty:"<<"\n";
            return;
        }
        while(i!=rear)
        {
            cout<<a[i]<<"\n";
            i=(i+1)%size;
        }
        cout<<a[rear]<<"\n";
    }
};

int main()
{
    CircularQueue c;

    int choice,val;

    while(1)
    {
        cout<<"1 for enqueue:"<<"\n";
        cout<<"2 for dequeue:"<<"\n";
        cout<<"3 for check full condition:"<<"\n";
        cout<<"4 for check empty condition:"<<"\n";
        cout<<"5 for display:"<<"\n";
        cout<<"6 for end:"<<"\n";

        cout<<"Enter choice:"<<"\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Enter the value:"<<"\n";
            cin>>val;
            c.enqueue(val);
            break;
            case 2:
            c.dequeue();
            break;
            case 3:
            if(c.isFull())
            {
                cout<<"queue is full:"<<"\n";
            }
            else
            cout<<"queue is not full:"<<"\n";
            break;
            case 4:
            if(c.isEmpty())
            cout<<"queue is empty:"<<"\n";
            else
            cout<<"queue is not empty:"<<"\n";
            break;
            case 5:
            c.display();
            break;
            case 6:
            return 0;
            break;
            default:
            return 0;
        }
    }
}
