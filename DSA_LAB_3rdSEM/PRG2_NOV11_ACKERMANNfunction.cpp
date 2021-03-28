//WAP TO WRITE A ACKERMANN FUNCTION

#include<iostream>
using namespace std;
//PROGRAM TO WRITE ACKERMANN FUNCTION
int A(int m,int n)
{
    if(m==0)return n+1;
    else if(n==0)return A(m-1,n+1);
    else return A(m-1,A(m,n-1));
}

int main()
{
    int m,n;
    cout<<"ENTER THE VALUE OF m: ";
    cin>>m;
    cout<<"ENTER THE VALUE OF n: ";
    cin>>n;
    cout<<"THE ACKERMANN VALUE IS: "<<A(m,n);
    return 0;
}

