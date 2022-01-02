#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int hcf(int a,int b)
{
    if(b!=0)
    {
        return hcf(b,a%b);
    }
    else return a;
}
int lcm(int a,int b)
{
  return (a/hcf(a,b))*b;
}
ll binary_to_decimal(ll n)
{
    int decimal=0;
    int i=0;
    while(n>0)
    {
        decimal+=(n%10)*pow(2,i);
        n/=10;
        ++i;
    }
    return decimal;
}
ll binary_to_octal(ll n)
{
    int octal=0;
    int decimal=0;
    int i=0;
    while(n>0)
    {
        decimal+=(n%10)*pow(2,i);
        n/=10;
        ++i;
    }
    i=1;
    while(decimal>0)
    {
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}
int main()
{
//    int a,b;
//    cin>>a>>b;
//    cout<<"GCD IS "<<hcf(a,b)<<endl;
//    cout<<"HCF IS "<<hcf(a,b)<<endl;
//    cout<<"LCM IS "<<lcm(a,b)<<endl;
      ll n;
      cin>>n;
      cout<<"Binary to decimal is "<<binary_to_decimal(n);
      cout<<"\nBinary to octal is "<<binary_to_octal(n);

    return 0;
}
