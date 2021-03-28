//CONVERT INFIX TO POSTFIX EXPRESSION
#include<iostream>
#include<string>
#define MAX 25
using namespace std;

char Stack[25];
int top=-1;
//PUSH FUNCTION
void push(char oper)
{
    if(top==MAX-1)
        cout<<"STACK IS FULL\n";
    else
    {
        top++;
        Stack[top]=oper;
    }
}
//POP FUNCTION
char pop()
{
    char ch;
    if(top==-1)
    {
       // cout<<"THE STACK IS EMPTY\n";
    }
    else
    {
        ch=Stack[top];
        Stack[top]='\0';
        top--;
        return(ch);
    }
    return 0;
}
int precedence(char alpha)
{
    if(alpha=='+'||alpha=='-')
        return(1);
    if(alpha=='*'||alpha=='/')
        return(2);
    if(alpha=='^')
        return(3);
    return 0;
}
string convert(string infix)
{
    int i=0;
    string postfix="";
    while(infix[i]!='\0')
    {
        if(infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z')
        {
            postfix.insert(postfix.end(),infix[i]);
            i++;
        }
        else if(infix[i]=='('||infix[i]=='{'||infix[i]=='[')
                    {
                        push(infix[i]);
                        i++;
                    }
        else if(infix[i]==')'||infix[i]=='}'||infix[i]==']')
        {
            if(infix[i]==')')
            {
                while(Stack[top]!='(')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
            if(infix[i]==']')
            {
                while(Stack[top]!='[')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
            if(infix[i]=='}')
            {
                while(Stack[top]!='{')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }

        }
        else
        {
            if(top==-1)
            {
                push(infix[i]);
                i++;
            }
            else if(precedence(infix[i])<=precedence(Stack[top]))
            {
                postfix.insert(postfix.end(),pop());

                while(precedence(infix[i])==precedence(Stack[top]))
                {
                    postfix.insert(postfix.end(),pop());
                    if(top<0){break;}
                }
                push(infix[i]);
                i++;
            }
            else if(precedence(infix[i])>precedence(Stack[top]))
            {
                 push(infix[i]);
                 i++;
            }
        }
    }
    while(top!=-1)
    {
        postfix.insert(postfix.end(),pop());
    }
    cout<<"THE CONVERTED POSTFIX STRING IS: "<<postfix;
    return postfix;
}
int main()
{
    int cont;
    string infix,postfix;
    cout<<"\nENTER THE INFIX EXPRESSION : ";
    cin>>infix;
    postfix=convert(infix);
    return 0;
}

