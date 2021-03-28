#include<iostream>
using namespace std;

int getMax(int arr[],int n)
{
    int maxi=arr[1];
    for(int i=2;i<=n;i++)
    {
        if(arr[i]>=maxi)
            maxi=arr[i];
    }
    return maxi;
}
void COUNTINGSORT(int *arr,int n)
{
    int output[n+1];
    int maxi,index,i,pass=1;
    maxi=getMax(arr,n);
    int counting[maxi+1];
    for(i=0;i<=maxi;i++)
    {
        counting[i]=0;

    }
    cout<<"\nINITIALISING COUNT ARRAY TO ZERO\n";
    for(i=1;i<=maxi;i++)
    {
        cout<<counting[i] <<" ";

    }
    for(i=1;i<=n;i++)
    {
        counting[arr[i]]=counting[arr[i]]+1;
    }
    cout<<"\nINCREASED NO. OF COUNT IN COUNT ARRAY\n";
    for(i=1;i<=n;i++)
    {
        cout<<counting[arr[i]]<<" ";
    }

    for(i=1;i<=maxi;i++)
    {
        counting[i]=counting[i]+counting[i-1];
    }
    cout<<"\nCUMULATIVE FREQUENCY\n";
    for(i=1;i<=maxi;i++)
    {
        cout<<counting[i]<<" ";
    }
    for(i=n;i>=1;i--)
    {
        index=counting[arr[i]];
        counting[arr[i]]=counting[arr[i]]-1;
        output[index]=arr[i];
    }
    cout<<"\nDECREASED COUNT OF SAME NOS. IN COUNT ARRAY\n";
    for(i=1;i<=n;i++)
    {
        cout<<counting[arr[i]]<<" ";
    }

    for(i=1;i<=n;i++)
    {
        arr[i]=output[i];
    }
    cout<<"\nSTORE OUTPUT TO MAIN ARRAY:\n";
    for(i=1;i<=n;i++)
    {
        cout<<counting[arr[i]]<<" ";
    }

}

int main()
{
    int i,n;
    cout<<"ENTER THE NO OF ELEMENTS:"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"ENTER THE ELEMENTS:"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"BEFORE SORTING:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    COUNTINGSORT(arr,n);
    cout<<endl<<"AFTER SORTING:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

