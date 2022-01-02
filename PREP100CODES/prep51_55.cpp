#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//    int num,div,count;
//    cin>>num>>div;
//    cout<<"The numbers having "<<div<<" divisors upto "<<num<<":\n";
//    for(int i=0;i<=num;i++)
//    {
//        count=0;
//        for(int j=1;j<=i;j++)
//        {
//            if(i%j==0){count++;}
//        }
//        if(count==div){cout<<i<<" ";}
//    }
//    cout<<endl;
//    double a,b,c,discriminant,root1,root2,real,img;
//    cin>>a>>b>>c;
//    discriminant=b*b-4*a*c;
//    if(discriminant>0){root1=(-b+sqrt(discriminant))/(2*a);root2=(-b-sqrt(discriminant))/(2*a);
//    cout<<"root1 :"<<root1<<" root2 :"<<root2;
//    }
//    else if(discriminant==0){root1=root2=-b/(2*a);    cout<<"root1 :"<<root1<<" root2 :"<<root2;
//}
//    else{real=-b/(2*a); img=sqrt(-discriminant)/(2*a);cout<<"root1 :"<<real<<"+"<<img<<"i"; }
//    int n;
//    cin>>n;
//    int a[n],minimum;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    minimum=a[0];
//        for(int i=0;i<n;i++){if(a[i]<minimum){minimum=a[i];}}
//        cout<<"Minimum element : "<<minimum<<endl;
//    int n;
//    cin>>n;
//    int a[n],minimum,min2;
//    for(int i=0;i<n;i++){cin>>a[i];}
//    minimum=INT_MAX;
//    min2=INT_MAX-1;
//    for(int i=0;i<n;i++){ if(a[i]<minimum){min2=minimum; minimum=a[i];} else if(a[i]<min2){min2=a[i];}}
//        cout<<"Second Minimum element : "<<min2<<endl;
    int n;
    cin>>n;
    int a[n],maximum;
    for(int i=0;i<n;i++){cin>>a[i];}
    maximum=a[0];
    for(int i=0;i<n;i++){if(a[i]> maximum){maximum=a[i];}}
    cout<<"Maximum element : "<<maximum<<endl;

    return 0;
}
