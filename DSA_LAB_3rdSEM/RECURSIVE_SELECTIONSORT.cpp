#include<iostream>
using namespace std;
int sw=0,comp=1,t=1;

void SelectionSort(int arr[],int n,int i)
{

    int min_index=i,k;
    if(n==min_index)
        return;
    for(int j=i+1;j<=n;j++)
         {
             if(arr[min_index]>arr[j])
             {
                 min_index=j;
                 ++sw;
             }
             comp++;
         }

    if(min_index!=i)
    {
         swap(arr[min_index],arr[i]);
    }
    cout<<endl<<"Pass "<<t<<": ";
    for(k=0;k<=n;k++)
         {
             cout<<arr[k]<<" ";
         }
         ++t;
    cout<<"\nTOTAL NO. OF COMPARISONS: "<<comp;
    cout<<"\nTOTAL NO. OF SWAP: "<<sw;

    SelectionSort(arr,n,i+1);


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
    SelectionSort(arr,n-1,0);
    cout<<endl<<"AFTER SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
