#include<iostream>
#include<cmath>
using namespace std;
int isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0){sum+=i;}
    }
    if(sum==n) return 1;
    return 0;
}
int isAutomorphic(int n)
{
    int square=n*n,temp=n,num=1;
    while(temp>0){temp/=10; num=num*10;}
    if(square%num==n) return 1;
    return 0;
}
int isHarshad(int n)
{
    int temp=n,sum=0;
    while(temp>0){sum+=temp%10;temp/=10;}
    if(n%sum==0) return 1;
    return 0;
}
int isAbundant(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0){sum+=i;}
    }
    if(sum>n) return 1;
    return 0;
}
int isFriendly(int n,int m)
{
    int sum=0,sum2=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) sum+=i;
    }
    for(int i=1;i<=m/2;i++)
    {
        if(m%i==0) sum2+=i;
    }
    if((n==sum2)&&(m==sum)) return 1;
    return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
//    if(isPerfect(n)){cout<<n<<" is a perfect number.\n";}
//    else{cout<<n<<" is not a perfect number.\n";}
//
//    if(isAutomorphic(n)){cout<<n<<" is a automorphic number.\n";}
//    else{cout<<n<<" is not a automorphic number.\n";}

//    if(isHarshad(n)){cout<<n<<" is a Harshad number.\n";}
//    else{cout<<n<<" is not a Harshad number.\n";}

//    if(isAbundant(n)){cout<<n<<" is a abundant number.\n";}
//    else{cout<<n<<" is not a abundant number.\n";}
    if(isFriendly(n,m)){cout<<n<<" and "<<m<<" is a friendly pair.\n";}
    else{cout<<n<<" and "<<m<<" is not a friendly pair.\n";}

    return 0;
}
