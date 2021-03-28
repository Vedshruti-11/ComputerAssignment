#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class stac{
  public:
  int top;
  int arr[MAX];
  stac()
  {
      top=-1;
  }
  void push(int x)
  {
      if(top==MAX-1)
      {
          cout<<"Stack is full"<<"\n";
          return;
      }
      else
      {
          top++;
          arr[top]=x;
      }
  }

  void pop()
  {
      if(top==-1)
      {
          cout<<"Stack is empty"<<"\n";
          return;
      }
      else
      {
          int item=arr[top];
          top--;
          cout<<"The popped element is:"<<item<<"\n";
      }
  }

  int peek()
  {
      if(top==-1)
      {
          cout<<"Stack is empty:"<<"\n";
          return INT_MIN;
      }
      else
      {
          return arr[top];
      }
  }

  void display()
  {
      int i;
      if(top==-1)
      {
          cout<<"Stack is empty:"<<"\n";
          return;
      }
      for(i=top;i>=0;i--)
      {
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
  }

};

