#include<iostream>
using namespace std;
int comp=0;

int binarysearch(int*,int,int,int );
void InsertionSort(int*,int );
void InsertionSort(int arr[],int n)
{
    int i,key,j,pass=0,pos;
    for(i=1;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        pos=binarysearch(arr,key,0,j);
        while(j>=pos&&(++comp))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        pass++;
        cout<<endl<<"Pass "<<pass<<": ";
         for(int k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
    }

    cout<<"\nTOTAL NO. OF COMPARISONS:"<<comp;

}
int binarysearch(int arr[],int x,int low,int high)
{
    if(high<=low&&(++comp))
    {
        if(x>arr[low])
            return low+1;
        return low;
    }
    int mid=(low+high)/2;
    if(x==arr[mid]&&(++comp))
        return mid+1;
    if(x>arr[mid]&&(++comp))
        return binarysearch(arr,x,mid+1,high);
    return binarysearch(arr,x,low,mid-1);
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
    cout<<"\n-------------------------------------------------------------\n";
    InsertionSort(arr,n);
     cout<<"\n-------------------------------------------------------------\n";
    cout<<endl<<"AFTER SORTING:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}


