
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[],int n)
{
    int maximum=arr[0];
    int i;
    for(i=1;i<n;i++)
    {
        maximum=max(maximum,arr[i]);
    }
    return maximum;
}

void CountingSort(int arr[],int n,int x)
{
    int output[n];
    int i,c[10]={0};

    for(i=0;i<n;i++)
    {
        c[(arr[i]/x)%10]++;
    }

    for(i=1;i<10;i++)
    c[i]+=c[i-1];

    for(i=n-1;i>=0;i--)
    {
        output[c[(arr[i]/x)%10]-1]=arr[i];
        c[(arr[i]/x)%10]--;
    }

    for(i=0;i<n;i++)
    arr[i]=output[i];
}

void RadixSort(int arr[],int n)
{
    int res=getmax(arr,n);
    for(int i=1;res/i>0;i=i*10)
    {
        CountingSort(arr,n,i);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    cin>>arr[i];

    RadixSort(arr,n);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
