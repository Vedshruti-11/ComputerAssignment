#include<iostream>
using namespace std;

void MergeSort(int x[],int m,int y[],int n,int z[])
{
    int i=0,k=0,j=0,pass=1,l=0,comp=0;
    while(((++comp)&&i<=m)&&((++comp)&&j<=n))
    {
        if(x[i]<=y[j])
        {
            z[k]=x[i];k++;i++;
        }
        else
        {
            z[k]=y[j];k++;j++;
        }

    }
    while(i<=m)
    {
        z[k]=x[i];i++;k++;
    }
    while(j<=n)
    {
        z[k]=y[j];j++;k++;
    }

    cout<<"\nTOTAL NO. OF COMPARISONS: "<<comp;
}

int main()
{
    int i,m,n;
    cout<<"ENTER THE NO OF ELEMENTS OF ARRAY 1:"<<endl;
    cin>>m;
    int arr1[m];
    cout<<"ENTER THE ELEMENTS OF ARRAY 1:"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"ENTER THE NO OF ELEMENTS OF ARRAY 2:"<<endl;
    cin>>n;
    int arr2[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY 2:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"BEFORE MERGE SORTING: ARR1[]: "<<endl;
    for(i=0;i<m;i++)
    {
        cout<<arr1[i]<<" ";
    }cout<<"\nBEFORE MERGE SORTING: ARR2[]: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    int arr[m+n];
    MergeSort(arr1,m,arr2,n,arr);
    cout<<"\nAFTER SORTING:"<<endl;
    for(i=0;i<m+n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


