#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int i,j,t=1,k,comp=0,sw=0;

    for(i=0;i<=n-2;i++)
    {
         int min_index=i;
         for(j=i+1;j<=n-1;j++)
         {
             if(arr[min_index]>arr[j])
             {
                 min_index=j;
                 ++sw;
             }
             comp++;
         }

         swap(arr[min_index],arr[i]);
         cout<<endl<<"Pass "<<t<<": ";
         for(k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
         ++t;
    }
    cout<<"\nTOTAL NO. OF COMPARISONS: "<<comp;
    cout<<"\nTOTAL NO. OF SWAP: "<<sw;
}

int main()
{
    int i,n;
    cout<<"ENTER THE NO OF ELEMENTS:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"BEFORE SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    SelectionSort(arr,n);
    cout<<endl<<"AFTER SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
