#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll fact(int i)
{
    if(i==1|| i==0) return 1;
    return i*fact(i-1);
}
int gcd(int n1,int n2)
{
    int gcd;
    for(int i=1; i<=n1 && i<=n2 ;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    return gcd;
}
int number(int n)
{
    if(n==0){return 1;}
    int num=0;
    while(n>0)
    {
        int rem=num%10;
        if(rem==0) rem=1;
        num=num*10+rem;
        n=n/10;
    }
    return num;
}
int prime(int n)
{
    int i;
    if(i<=1) return 0;
    int flag=1;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0) {flag=0; break;}
    }
    return flag;
}
void sum_of_primes(int n)
{
    int check=1;
    for(int i=2;i<=n/2;i++)
    {
        if(prime(i))
        {
            if(prime(n-i))
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                check=0;
                break;
            }
        }
    }
    if(check){cout<<"Cannot be expressed as sum of two numbers"<<endl;}
}
int main()
{
//    int n,r;
//    cin>>n>>r;
//    if(n>r) cout<<"Cannot adjust "<<n<<" people on "<<r<<" seats"<<endl;
//    else{
//        int p=fact(r)/fact(r-n);
//        cout<<p<<" ways"<<endl;
//    }
//    int p;
//    cin>>p;
//    cout<<p*(p-1)/2<<" handshakes"<<endl;
//    int num1,den1,num2,den2;
//    cin>>num1>>den1>>num2>>den2;
//    int lcm=(den1*den2)/gcd(den1,den2);
//    int sum=(num1*lcm/den1)+(num2*lcm/den2);
//    int num3=sum/gcd(sum,lcm);
//    lcm=lcm/gcd(sum,lcm);
//    cout<<num3<<"/"<<lcm<<endl;
    int n;
    cin>>n;
//    cout<<number(n)<<endl;
    sum_of_primes(n);
    return 0;
}
