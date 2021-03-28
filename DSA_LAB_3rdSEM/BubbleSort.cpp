#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    int i,j,t=1,k,flag,comp=0;

    for(i=0;i<=n-2;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
                 flag=1;

             }comp++;
         }

         if(flag==0)break;
         cout<<endl<<"Pass "<<t<<": ";
         for(k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
         ++t;
    }
    cout<<"\nTOTAL NO. OF COMPARISONS:"<<comp;
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
    BubbleSort(arr,n);
    cout<<endl<<"AFTER SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}

