#include<iostream>
#include<stdlib.h>
using namespace std;
int comp=0;
int pass=0;
partitn(int *arr,int low,int high)
{
    int pvt=arr[high];
    int i=low-1;
    for (int j = low; j <= high - 1; j++)

    {
        ++comp;
        if ((arr[j] < pvt))
        {
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i + 1], arr[high]);


    cout<<"\nPIVOT:"<<pvt;
    pass++;
    cout<<"\npass: "<<pass<<"\n";
    for(int k=low;k<=high;k++)
        {
            cout<<" "<<arr[k]<<"  ";
        }
        return i+1;
        }

quickSort(int* arr,int low,int high)
{
    if(low<high)
        {
            int j=partitn(arr,low,high);
            quickSort(arr,low,j-1);
            quickSort(arr,j+1,high);
        }
}

int main()
{
    int n;
    cout<<"Enter the no of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\nThe array before sorting is \n";
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
    quickSort(arr,0,n-1);
    cout<<"\nTotal comparison "<<comp;
    cout<<"\nThe array after sorting is \n";
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
        return 0;
}

