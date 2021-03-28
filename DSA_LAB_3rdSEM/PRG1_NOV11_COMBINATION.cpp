//WAP TO CALCULATE nCr USING RECURSION

#include<iostream>
using namespace std;
//FUNCTION TO CALCULATE COMBINATION
int COMBINATION(int n,int r)
{
    if(n<r)return 0;
    if(r==0||n==r)
        return 1;
    else
        return COMBINATION(n-1,r-1)+COMBINATION(n-1,r);
}
int main()
{
    int n,r;
    cout<<"ENTER THE VALUE OF n: ";
    cin>>n;
    cout<<"ENTER THE VALUE OF r: ";
    cin>>r;
    cout<<"THE VALUE OF "<<n<<"C"<<r<<"="<<COMBINATION(n,r)<<endl;
    return 0;
}
