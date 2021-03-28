#include<iostream>
using namespace std;

struct num
{
    int number,index;
};
void StableSelectionSort(num arr[],int n)
{
    int i,j,t=1,k,comp=0,key;

    for(i=0;i<=n-2;i++)
    {
         int min_index=i,ind;
         for(j=i+1;j<=n-1;j++)
         {
             if(arr[min_index].number>arr[j].number)
             {
                 min_index=j;
             }
             comp++;
         }
         key=arr[min_index].number;
         ind=arr[min_index].index;
             while(min_index>i)
             {
                 arr[min_index].number=arr[min_index-1].number;
                 arr[min_index].index=arr[min_index-1].index;
                 min_index=min_index-1;
             }
             arr[i].number=key;
             arr[i].index=ind;
         cout<<endl<<"Pass "<<t<<": ";
         for(k=0;k<n;k++)
         {
             cout<<" |number: "<<arr[k].number<<" index: "<<arr[k].index;
         }
         ++t;
    }
    cout<<"\nTOTAL NO. OF COMPARISONS: "<<comp;
}


int main()
{
    int i,n;
    cout<<"ENTER THE NO OF ELEMENTS:"<<endl;
    cin>>n;
    num arr[n];
    cout<<"ENTER THE ELEMENTS:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].number;
        arr[i].index=i;
    }
    cout<<"BEFORE SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i].number<<" index= "<<arr[i].index<<"| ";
    }
    cout<<"\n--------------------------------------------------------------------\n";
    StableSelectionSort(arr,n);
    cout<<"\n--------------------------------------------------------------------\n";
    cout<<"AFTER SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i].number<<" index= "<<arr[i].index<<"| ";
    }
    return 0;
}
