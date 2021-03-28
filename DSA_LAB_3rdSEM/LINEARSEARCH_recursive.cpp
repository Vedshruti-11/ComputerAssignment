//GIVEN AN ARRAY arr[] of n elements WRITE A RECURSIVE FUNCTION TO SEARCH A GIVEN ELEMENT X IN arr[]

#include<iostream>
using namespace std;
#define MAX 20
int search(int arr[],int l, int r, int x)
{
    if(l>r)
        return -1;
    if(arr[l]==x)
        return l;
    if(arr[r]==x)
        return r;
    return search(arr,l+1,r-1,x);
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
    pos=search(arr,0,r,x);
    if(pos==-1)
        cout<<"SEARCH ELEMENT NOT FOUND..."<<endl;
    else
        cout<<"THE SEARCH ELEMENT "<<x<<" IS FOUND AT INDEX "<<pos<<endl;

}
