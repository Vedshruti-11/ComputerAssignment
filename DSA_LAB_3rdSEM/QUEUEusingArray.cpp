
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class que{
  public:
  int front,rear,arr[MAX];
  que()
  {
      front=-1;
      rear=-1;
  }

  void enqueue(int x)
  {
      if(rear==MAX-1)
      {
          cout<<"Queue is full:"<<"\n";
          return;
      }
      else if(front==-1 && rear==-1)
      {
          front=0;
          rear=0;
          arr[rear]=x;
      }
      else
      {
          rear++;
          arr[rear]=x;
      }
  }


  void dequeue()
  {
      if(front==-1)
      {
          cout<<"Queue is empty:"<<"\n";
          return;
      }
      else if(front==rear)
      {
          cout<<"The popped element is"<<arr[front]<<"\n";
          front=-1;
          rear=-1;
      }
      else
      {
           cout<<"The popped element is"<<arr[front]<<"\n";
           front++;
      }
  }


  int  peek()
  {
    if(front==-1)
    {
          cout<<"Queue is empty:"<<"\n";
          return -1;
    }
    return arr[front];
  }

  void display()
  {
      if(front==-1)
      {
          cout<<"Queue is empty:"<<"\n";
          return;
      }
      int i;
      for(i=front;i<=rear;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
  }

};
int main() {
    que q;
    int choice ,a,b;
    while(1)
    {
        cout<<"1 for dequeue:"<<"\n";
        cout<<"2 for enqueue:"<<"\n";
        cout<<"3 for peek:"<<"\n";
        cout<<"4 for display:"<<"\n";
        cout<<"5 for exit:"<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the number to be pushed:"<<"\n";
            cin>>a;
            q.enqueue(a);
            break;
            case 2:
            q.dequeue();
            break;
            case 3:
            cout<<q.peek()<<"\n";
            break;
            case 4:
            q.display();
            break;
            case 5:
            exit(0);
        }
    }
}
