// ALGORITHM1: TOTAL CONSONANTS
#include<iostream>
#include<string.h>
using namespace std;
//FUNCTION TO CHECK FOR CONSONANTS
bool Is_CONSONANT(char ch)
{
    //TO HANDLE LOWER CASE
    ch=toupper(ch);
    return !(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')&& ch>=65 && ch<=90;
}
int TOTAL_CONS0NANT(string str,int n)
{
    if(n==1)
    {
        return Is_CONSONANT(str[0]);
    }
    return TOTAL_CONS0NANT(str,n-1)+Is_CONSONANT(str[n-1]);
}
//DRIVER CODE
int main()
{
    string str;
    int total;
    cout<<"ENTER THE STRING: "<<endl;
    getline(cin,str);
    total=TOTAL_CONS0NANT(str,str.length());
    cout<<"THE TOTAL NO OF CONSONANTS IN THE STRING... "<<total<<endl;

    return 0;
}
