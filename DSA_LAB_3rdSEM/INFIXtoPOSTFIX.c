
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int PrecOfOperator(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}

void InfixToPostfix(string s)
{
    stack<char> st;
    //st.push('$');
    int len=s.length();
    string res;
    int i;
    for(i=0;i<len;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(st.empty()==false && st.top()!='(')
            {
                char c=st.top();
                res+=c;
                st.pop();
            }
            if(st.top()=='(')
            {
                st.pop();
            }
        }
        else
        {
            while(st.empty()==false && PrecOfOperator(s[i])<=PrecOfOperator(st.top()))
            {
                char c=st.top();
                res+=c;
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(st.empty()==false)
    {
        char c=st.top();
        res+=c;
        st.pop();
    }
    cout<<res<<"\n";
}

int main()
{
    string s="a+b*(c^d-e)^(f+g*h)-i";

    InfixToPostfix(s);


}
