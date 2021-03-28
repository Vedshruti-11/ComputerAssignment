//RECURSIVE C++ PROGRAM TO CHECK NUMBER IS PALINDROME OR NOT

#include<iostream>
using namespace std;

//RECURSIVE FUNCTION THAT RETURNS THE REVERSE OF DIGITS
int rev(int n,int temp)
{
    //base case
    if(n==0)
        return temp;
    //stores the reverse of a number
    temp=(temp*10)+(n%10);
    return rev(n/10,temp);
}
//MAIN code
int main()
{
    int num;
    cout<<"ENTER THE NUMBER TO BE CHECKED: ";
    cin>>num;
    if(rev(num,0)==num)
    {
        cout<<"THE NUMBER "<<num<<" IS PALINDROME"<<endl;
    }
    else
        cout<<"THE NUMBER "<<num<<" IS NOT PALINDROME"<<endl;
    return 0;
}

