#include<iostream>
#include<cmath>
using namespace std;
void fibonacci(int n,int first,int second)
{
    cout<<"Fibonacci upto "<<n<<"\n"<<first;
    int sum;
    for(int i=1;i<n;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        cout<<" "<<sum;
    }
}
int factorial(int n)
{
    if(n==1||n==0) return 1;
    return n*factorial(n-1) ;
}
void factors(int n)
{
   cout<<"The factors of "<<n<<" are:\n";
   for(int i=1;i<=n;i++)
   {
       if(n%i==0){cout<<i<<" ";}
   }
}
int strongnumber(int n)
{
    int temp=n,sum=0;
    if(n==0) return 0;
    while(temp>0)
    {
        sum+=factorial(temp%10);
        temp=temp/10;
    }
    if(sum==n) return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
//    factors(n);
    int strong=strongnumber(n);
    if(strong){cout<<n<<" is a strong number\n";}
    else{cout<<n<<" is not a strong number\n";}
//    fibonacci(n,0,1);
//    if(n>=0){
//    int fact=factorial(n);cout<<"\nThe factorial of "<<n<<" = "<<fact;}
//    else{
//    cout<<"\nThe factorial cannot be calculated";}
//    int base,exponent;
//    cin>>base>>exponent;
//    cout<<"Base: "<<base<<" "<<"\nExponent: "<<exponent<<"\nAns = "<<pow(base,exponent);

    return 0;
}
