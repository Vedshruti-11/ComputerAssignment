//WAP TO PROGRAM TOWER OF HANOI
#include<iostream>
#include<math.h>
using namespace std;

void TOH(int n,char src,char aux,char dest)
{
    if(n==1)
    {
        cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    else
    {
        TOH(n-1,src,dest,aux);
        cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        TOH(n-1,aux,src,dest);
    }
}
int main()
{
    int n,moves;
    cout<<"Enter the no. of disks: "<<endl;
    cin>>n;
    TOH(n,'S','A','D');
    moves=pow(2,n)-1;
    cout<<"The total no. of moves: "<<moves<<endl;
    return 0;
}
