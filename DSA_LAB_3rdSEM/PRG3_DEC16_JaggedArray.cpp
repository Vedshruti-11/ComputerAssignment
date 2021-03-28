#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: \n";
    cin>>n;
    int **arr,i,j;
    arr=(int**)malloc(n*sizeof(int*));
    cout<<"Enter the elements of the jagged array"<<endl;
    for(i=0;i<n;i++)
    {
        int size;
        cout<<"Enter the length of the array: ";
        cin>>size;
        arr[i]=(int*)malloc((size+1)*sizeof(int));
        arr[i][0]=size;
        cout<<"\nEnter the array:";
       for(j=1;j<=size;j++){
            cin>>arr[i][j];
       }
       cout<<endl;
    }
    cout<<"The jagged matrix:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i][0];j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
