#include<iostream>
#include<stack>

using namespace std;
void print(stack<string> s);
void copy(stack<string> s1,stack<string> s2)
{
    cout<<"before copy: \n"<<endl;
    print(s1);
    stack<string> s;
    while(!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    cout<<"after copy: \n"<<endl;
    print(s2);
}
void print(stack<string> s)
{
    stack<string> s1;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s1.push(s.top());
        s.pop();
    }
}
int main()
{
    stack<string> s1,s2;
    int i,n;
    string a[20];
    cout<<"Enter the no of elements:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s1.push(a[i]);
    }
    copy(s1,s2);
    return 0;
}
