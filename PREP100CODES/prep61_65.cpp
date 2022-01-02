#include<bits/stdc++.h>
using namespace std;

int Mscalar(int a[],int b[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i]*b[i];
    }
    return sum;
}
void sort(int a[],int b[],int n)
{
    int temp=0,i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(j=0; j<n; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
int main()
{

    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<n; j++)
    {
        cin>>b[j];
    }
    sort(a,b,n);
    cout<<"Minimum Scalar = "<<Mscalar(a,b,n);
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){cin>>a[i];}
//    cout<<"Duplicate elements are: "<<endl;
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[i]==a[j] && i!=j)
//                cout<<a[i]<<" ";
//        }
//    }
//    int n;
//    cin>>n;
//    int hash[123]={0};
//    int a[n];
//    int count=0;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    cout<<"Distinct elements are: "<<endl;
//    for(int i=0;i<n-1;i++)
//    {
//        if(hash[a[i]]==0)
//        {
//            hash[a[i]]=1;[
//            cout<<a[i]<<" ";
//            count++;
//        }
//    }
//    int n;
//    cin>>n;
//    int a[n];
//    int i;
//    map<int, int> mp;
//    for(i=0;i<n;i++){cin>>a[i]; mp[a[i]]++;}
//    cout<<"Distinct elements are: "<<endl;
//    for(auto i: mp)
//    {
//        if(i.second==1)
//            {cout<<i.first<<" ";}
//    }
}

