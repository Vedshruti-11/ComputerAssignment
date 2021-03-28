//USE RECURSIVE METHODE TO COPY STRINGS

#include<iostream>
using namespace std;

//FUNCTION TO COPY FROM ONE STRING TO ANOTHER USING RECURSION
void STRING_COPY(char s1[],char s2[],int index=0)
{
    //copying each character from s1 to s2
    s2[index]=s1[index];
    //if string reaches end then stop
    if (s1[index]=='\0')
    {
        return;
    }
    //increase character index by one
    STRING_COPY(s1,s2,index+1);
}
//DRIVER CODE
int main()
{
    char s1[100],s2[100]="";
    cout<<"ENTER THE STRING... "<<endl;
    cin>>s1;
    STRING_COPY(s1,s2);
    cout<<"THE COPIED STRING IS :"<<s2;
    return 0;

}
