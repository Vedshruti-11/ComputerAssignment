#include<iostream>
using namespace std;
int isPalindrome(int n)
{
    int temp=n,num=0;
    while(temp>0)
    {
        num=num*10+temp%10;
        temp=temp/10;
    }
    if(num==n) return 1;
    return 0;
}
int isArmstrong(int n)
{
    int temp=n,num=0;
    while(temp>0)
    {
        num+=(temp%10)*(temp%10)*(temp%10);
        temp=temp/10;
    }
    if(num==n) return 1;
    return 0;
}
void Armstrong(int l,int r)
{
    for(int i=l;i<=r;i++){
    int temp=i,num=0;
    while(temp>0)
    {
        num+=(temp%10)*(temp%10)*(temp%10);
        temp=temp/10;
    }
    if(num==i) cout<<i<<" ";
    }
}
int main()
{
    int n;
    int l,r;
    cin>>l>>r;
//    cin>>n;
//    int num=0;
    cout<<"The armstrong nos in range "<<l<<"-"<<r<<" :\n";
    Armstrong(l,r);
    cout<<endl;
//    if(isPalindrome(n))
//        cout<<n<<" is a Palindrome no.\n";
//    else
//        cout<<n<<" is not a Palindrome no.\n";
//    if(isArmstrong(n))
//        cout<<n<<" is an Armstrong no.\n";
//    else
//        cout<<n<<" is not a Armstrong no.\n";
//
//    while(n>0)
//    {
//        num=num*10+n%10;
//        n=n/10;
//        if(num==0){cout<<'0';}
//    }
//    cout<<num<<endl;
//    int sum=0;
//    while(n>0)
//    {
//        sum+=n%10;
//        n=n/10;
//    }
//    cout<<sum<<endl;
}
