#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
char *arr,*ar;
int n,m,i;
cout<<"enter the sizes of the two strings:";
cin>>n>>m;

arr=(char*)malloc((n+m)*sizeof(char));
cout<<"\nenter string 1:";
ar=(char*)malloc(m*sizeof(char));
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"\nenter string 2:";
for(i=0;i<m;i++)
cin>>ar[i];
for(i=n;i<m+n;i++)
arr[i]=ar[i-n];
   for(i=0;i<m+n;i++)
   cout<<arr[i];
return 0;
}
