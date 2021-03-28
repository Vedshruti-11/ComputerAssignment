#include<iostream>
using namespace std;
#define MAX 20
int search(int arr[],int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
        return i;
    return -1;
}

int main()
{
    int r,x,pos,arr[MAX];
    cout<<"ENTER THE NO OF ELEMENTS IN AN ARRAY: "<<endl;
    cin>>r;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: "<<endl;
    for(int i=0;i<r;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE ELEMENT TO BE SEARCHED:"<<endl;
    cin>>x;
    pos=search(arr,r,x);
    if(pos==-1)
        cout<<"SEARCH ELEMENT NOT FOUND..."<<endl;
    else
        cout<<"THE SEARCH ELEMENT "<<x<<" IS FOUND AT INDEX "<<pos<<endl;

}

