#include<iostream>
#include<stdlib.h>
using namespace std;
int comp=0;
int pass=0;
partitn(int *arr,int low,int high)
{
    int mid=(low+high)/2;
    int pvt=arr[mid];
    int i=low-1; int j=high+1;
    while((i<j))
        {
            do
            {   i=i+1;
            }while((arr[i]<pvt)&&((i<=high)&&(++comp)));
            do{
                    j--;
            }while((arr[j]>pvt)&&((j>=low)&&(++comp)));
            if(i<j)
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
   //cout<<"comp"<<comp;
   /* int temp;
        //temp=arr[low];
    arr[low]=arr[j];
    arr[j]=pvt;*/
    cout<<"\nPIVOT:"<<pvt;
    pass++;
    cout<<"\npass: "<<pass<<"\n";
    for(int k=low;k<=high;k++)
        {
            cout<<" "<<arr[k]<<"  ";
        }
        return j;
        }

quickSort(int* arr,int low,int high)
{
    if(low<high)
        {
            int j=partitn(arr,low,high);
            quickSort(arr,low,j);
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
