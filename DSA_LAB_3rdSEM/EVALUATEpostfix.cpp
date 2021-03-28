//TO EVALUATE POSTFIX EXPRESSION
#include<iostream>
#include<string>
#include "STACKFUNCTIONS.cpp"
using namespace std;

//FUNCTION TO EVALUATE GIVEN POSTFIX EXPRESSION

int postfixEval(string exp)
{
    //create an empty stack

    stac stack;

    //traverse the given expression
    for(int i=0;i<exp.length();i++)
    {
        //if current char is an operand push it to stack
        if(exp[i]>='0'&&exp[i]<'9')
            stack.push(exp[i]-'0');
        //if current char is an operator
        else
        {
            //pop two elements from the stack
            int x=stack.top();
            stack.pop();

            int y=stack.top();
            stack.pop();

            //evaluate the expression x op y, and push the result back to stack
            if(exp[i]=='+')
                stack.push(y+x);
            if(exp[i]=='-')
                stack.push(y-x);
            if(exp[i]=='*')
                stack.push(y*x);
            if(exp[i]=='/')
                stack.push(y/x);

        }
    }
     //At this point, the stack is left with only one element i.e. expression result
        return stack.top();
}
int main()
{
    cout<<"Enter the postfix: ";
    string exp;
    cin>>exp;
    int E=int(exp);
    cout<<postfixEval(E);
    return 0;
}
