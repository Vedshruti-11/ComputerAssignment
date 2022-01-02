#include<iostream>
using namespace std;
int isPositive(int n)
{
    if(n<0) return 0;
    return 1;
}
int isOdd(int n)
{
    if(n%2) return 1;
    return 0;
}
int sumN(int n)
{
    return (n*(n+1))/2;
}
int sumInRange(int a,int b)
{
    int sum=sumN(b)-sumN(a-1);
    return sum;
}
int isLeapYear(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
    {
        return 1;
    }
    return 0;
}
bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
//    int n;
//    cin>>n;
//    if(isPositive(n))
//        cout<<n<<" is positive "<<endl;
//    else
//        cout<<n<<" is negative "<<endl;
//    if(isOdd(n))
//        cout<<n<<" is odd "<<endl;
//    else
//        cout<<n<<" is even "<<endl;
//    int sum=0;
//    for(int i=1;i<=n;i++) sum+=i;
//    cout<<"Sum of first "<<n<<" natural numbers "<<sum<<endl;
//    cout<<"Sum of first "<<n<<" natural numbers "<<sumN(n)<<endl;
//    cout<<"Enter the range\n";
//    int a,b;
//    cin>>a>>b;
//    cout<<"Sum in range "<<a<<" and "<<b<<" = "<<sumInRange(a,b)<<endl;
//      int n1,n2;
//      cin>>n1>>n2;
//      int maxi=(n1>n2)?n1:n2;
//      cout<<maxi<<" is greater of "<<n1<<" and "<<n2<<endl;
//      int a,b,c;
//      cin>>a>>b>>c;
//      int maxi=(a>b)?((a>c)?a:c):((b>c)?b:c);
//      cout<<maxi<<" is greater of "<<a<<" , "<<b<<" and "<<c<<endl;
//        int year;
//        cin>>year;
//        if(isLeapYear(year))
//            cout<<year<<" is a leap year\n";
//        else
//            cout<<year<<" is not a leap year\n";
//        int n;
//        cin>>n;
//        if(isPrime(n))
//            cout<<n<<" is prime "<<endl;
//        else
//            cout<<n<<" is not prime\n";
          int a,b,flag;
          cin>>a>>b;
          for(int i=a;i<=b;i++)
          {
              if(i==1||i==0) continue;
              flag=1;
              for(int j=2;j<=i/2;++j){
              if(i%j==0){flag=0;break;}
              }
              if(flag==1){cout<<i<<endl;}
          }
}
