//A RECURSIVE FUNCTION TO CHEVK WHETHER THE A GIVEN STRING IS PALINDROME OR NOT
#include<iostream>
#include<string.h>
using namespace std;

//A RECURSION FUNCTION THAT CHECK A STR[s..e] is palindrome or not
bool isPalRec(char str[],int left,int right)
{
    //IF THERE IS ONLY ONE CHARACTER
    if(left==right)
    {
        return true;
    }
    //if first and last characters do not match
    if(str[left]!=str[right])
        return false;
    ////if there are more than two characters check if middle substring is also palindrome or not
    if(left<right+1)
        return isPalRec(str,left+1,right-1);
    return true;
}
bool isPalindrome(char str[])
{
    int n=strlen(str);
    //An empty string is considered as palindrome
    if(n==0)
        return true;
    return isPalRec(str,0,n-1);
}
//MAIN CODE
int main()
{
    char str[100];
    cout<<"Enter the string: "<<endl;
    cin>>str;
    if(isPalindrome(str))
    {
        cout<<"THE STRING "<<str<<" IS PALINDROME"<<endl;
    }
    else
    {
        cout<<"THE STRING "<<str<<" IS NOT PALINDROME"<<endl;
    }
    return 0;

}
