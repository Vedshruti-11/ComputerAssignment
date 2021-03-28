//  WRITE A PROGRAM TO IMPLEMENT QUICK SORT
#include<iostream>
#include<stdlib.h>
using namespace std;
int comp=0;
int pass=0;
//HOARE'S PARTION
partition(int *arr,int low,int high,int size)
{
    int pvt=arr[low];
    int i=low; int j=high+1;
    while(i<j)
        {
            do
            {   i=i+1;
            }while((arr[i]<pvt)&&((i<=high)&&(++comp)));
            do{
                    j--;
            }while((arr[j]>pvt)&&(++comp));
            if(i<j)
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }

    arr[low]=arr[j];
    arr[j]=pvt;
    cout<<"\npivot:"<<pvt;
    pass++;
    cout<<"\npass"<<pass<<": ";
    for(int k=0;k<size;k++)
        {
            cout<<" "<<arr[k]<<"  ";
        }
        return j;
}
//FUNCTION FOR QUICK SORT
quickSort(int* arr,int low,int high,int size)
{
    if(low<high)
        {
            int j=partition(arr,low,high,size);//calling the partition function
            quickSort(arr,low,j-1,size);//calling the quicksort function
            quickSort(arr,j+1,high,size);//calling the quicksort function
        }
}
//Main program to implement and use the algorithm for sorting
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
    int size=n;
    quickSort(arr,0,n-1,size);//calling the quicksort function
    cout<<"\nTotal comparison "<<comp;
    cout<<"\nThe array after sorting is \n";
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
        return 0;
}
