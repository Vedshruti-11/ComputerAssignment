#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int high,int low,int key)
{
    if(high>=low)
    {
        int mid=(high+low)/2;

        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key)
        return binary_search(arr,mid-1,low,key);

        else if(arr[mid]<key)
        return binary_search(arr,high,mid+1,key);
    }

    return -1;
}


int main()
{


    cout<<"Enter the size of the array:"<<"\n";
    int n;
    cin>>n;

    int arr[n],i,pos;
    cout<<"Enter the all elements of the array:"<<"\n";

    for(i=0;i<n;i++)
    cin>>arr[i];

    int k;
    cout<<"Enter the key:"<<"\n";
    cin>>k;
    pos=binary_search(arr,n-1,0,k);
    if(pos==-1)
        cout<<"SEARCH ELEMENT NOT FOUND..."<<endl;
    else
        cout<<"THE SEARCH ELEMENT "<<k<<" IS FOUND AT INDEX "<<pos<<endl;

    return 0;
}

