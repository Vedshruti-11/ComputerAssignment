#include<iostream>
using namespace std;

int main()
{
//    int n;
//    cin>>n;
//    int a[n],maximum,minimum;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    maximum=a[0];
//    minimum=a[0];
//    for(int i=0;i<n;i++){
//            if(a[i]> maximum){maximum=a[i];}
//            if(a[i]< minimum){minimum=a[i];}
//    }
//    cout<<"Largest element : "<<maximum<<endl;
//    cout<<"Smallest element : "<<minimum<<endl;

//    int n;
//    cin>>n;
//    int a[n],sum=0;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    for(int i=0;i<n;i++){sum=sum+a[i];}
//    cout<<"Sum of all array elements : "<<sum<<endl;

//    int n;
//    cin>>n;
//    int a[n],b[n];
//    for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
//    for(int i=n-1;i>=0;i--){a[n-1-i]=b[i];}
//    cout<<"The reverse of an array : "<<endl;
//    for(int i=0;i<n;i++){cout<<a[i]<<" ";}

//    int n;
//    cin>>n;
//    int a[n],b[n],temp;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[j]<a[i])
//            {
//                temp=a[i];
//                a[i]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
//    cout<<"Sorted array :"<<endl;
//    for(int i=0;i<n/2;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    for(int i=n-1;i>=n/2;i--)
//    {
//        cout<<a[i]<<" ";
//    }

    int n;
    cin>>n;
    int a[n],b[n],temp;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Ascending order Sorted array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nDescending order Sorted array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
