#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
#define MAX 1000
ll decimal_to_binary(int n)
{
    int decimal=n;
    int i=0,count,r;
    ll bin=0,base=1;
    while(n>0)
    {
        r=n%2;
        if(r) count++;
        bin=bin+r*base;
        n=n/2;
        base=base*10;
    }
    return bin;
}
ll decimal_to_octal(ll n)
{
    ll octal=0;
    int i=1,decimal=n;
    while(decimal>0)
    {
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}
ll octal_to_decimal(ll n)
{
    int decimal=0;
    int i=0;
    while(n>0)
    {
        decimal+=(n%10)*pow(8,i);
        n/=10;
        ++i;
    }
    return decimal;
}


int main()
{
//    int n;
//    cin>>n;
//    cout<<octal_to_decimal(n)<<endl;;
//    cout<<decimal_to_binary(n)<<endl;;
//    cout<<decimal_to_octal(n);
//    char octalnum[MAX];
//    ll i=0;
//    cin>>octalnum;
//    while(octalnum[i])
//    {
//        switch(octalnum[i])
//        {
//        case '0':
//            cout<<"000"; break;
//        case '1':
//            cout<<"001"; break;
//        case '2':
//            cout<<"010"; break;
//        case '3':
//            cout<<"011"; break;
//        case '4':
//            cout<<"100"; break;
//        case '5':
//            cout<<"101"; break;
//        case '6':
//            cout<<"110"; break;
//        case '7':
//            cout<<"111"; break;
//        default:
//            cout<<"\nInvalid octal digit "<<octalnum[i];
//            return 0;
//        }
//        i++;
//    }
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){cout<<"First Quadrant"<<endl;}
    if(x<0 && y>0){cout<<"Second Quadrant"<<endl;}
    if(x<0 && y<0){cout<<"Third Quadrant"<<endl;}
    if(x>0 && y<0){cout<<"Fourth Quadrant"<<endl;}
    if(x==0 && y==0){cout<<"Lies at Origin"<<endl;}
    return 0;
}
