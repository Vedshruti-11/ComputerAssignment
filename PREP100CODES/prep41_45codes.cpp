#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long ll;

int countDecoding(char *digit,int n)
{

    int decodings[n+1];
    decodings[0]=1;
    decodings[1]=1;
    for(int i=1;i<=n;i++)
    {
        int q=digit[i]-48;
        int p=digit[i-1]-48;
        if(q>0 && q<=26) decodings[i+1]=decodings[i];
        if((q+p*10)>0 && (q+p*10)<=26)
            decodings[i+1]+=decodings[i-1];
    }
    return decodings[n];
}
void isVowel(char c)
{
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }

}
void isAlphabet(char c)
{
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
    {
        cout<<"Alphabet"<<endl;
    }
    else
    {
        cout<<"Not an alphabet"<<endl;
    }
}
int main()
{
    char digit[20];
//    cin>>digit;
//    int n=strlen(digit);
//    cout<<countDecoding(digit,n)<<endl;
//    char c;
//    cin>>c;
//    isAlphabet(c);
//    double r,area_circle;
//    cin>>r;
//    area_circle=3.14*r*r;
//    cout<<area_circle<<endl;
    char c;
    cin>>c;
    cout<<int(c)<<endl;

    return 0;

}
