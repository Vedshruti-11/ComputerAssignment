#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long ll;
int noOfDigits(int n)
{
    if(n==0){return 1;}
    int digits=0;
    while(n>0)
    {
        digits++;
        n=n/10;
    }
    return digits;
}
void numToWords(int n)
{
    int length=noOfDigits(n);
    string ones[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string tens[11]= {"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string multiple[11]= {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred[2]= {"hundred","thousand"};
    switch(length)
    {
    case 0:
        cout<<"Empty"<<endl;
        break;
    case 1:
        cout<<ones[n];
        break;

    case 2:
        if(n<20)
        {
            cout<<tens[n-9]<<endl;
        }
        else if(n%10==0)
        {
            cout<<multiple[n/10]<<endl;
        }
        else
        {
            cout<<multiple[n/10]<<" "<<ones[n%10]<<endl;
        }
        break;

    case 3:
        if(n%100==0)
        {
            cout<<ones[(n/100)%10]<<" "<<hundred[0]<<endl;
        }
        else
        {
            cout<<ones[(n/100)%10]<<" "<<hundred[0]<<" ";
            if(n%100>=0 && n%100<=9 ){ cout<<ones[n]<<endl;}
            else if((n%100)<20)
            {
                cout<<tens[(n%100)-9]<<endl;
            }
            else if(n%10==0)
            {
                cout<<multiple[(n%100)/10]<<endl;
            }
            else
            {
                cout<<multiple[(n%100)/10]<<" "<<ones[n%10]<<endl;
            }
        }
        break;

    case 4:
        if(n%1000==0)
        {
            cout<<ones[n/1000]<<" "<<hundred[1]<<endl;
        }
        else
        {
            cout<<ones[n/1000]<<" "<<hundred[1]<<" ";
            cout<<ones[(n%1000)/100]<<" "<<hundred[0]<<" ";
            if(n%100!=0){
            if(n%100>0 && n%100<=9 ){ cout<<ones[n]<<endl;}
            else if((n%100)<20)
            {
                cout<<tens[(n%100)-9]<<endl;
            }
            else if(n%10==0)
            {
                cout<<multiple[(n%100)/10]<<endl;
            }
            else
            {
                cout<<multiple[(n%100)/10]<<" "<<ones[n%10]<<endl;
            }
         }
        }
        break;

    default:
        cout<<"Invalid input"<<endl;
    }
}
int main()
{

//    cout<<"Prime nos. between 1 to 100"<<endl;
//    for(int i=2; i<=100; i++)
//    {
//        int count=0;
//        for(int j=2; j<=i; j++)
//        {
//            if(i%j==0)
//            {
//                count++;
//            }
//        }
//        if(count==1)
//        {
//            cout<<i<<" ";
//        }
//    }
//    cout<<endl;

//    int n;
//    cin>>n;
//      cout<<"The number of digits in the integer = "<<noOfDigits(n)<<endl;
//    numToWords(n);
//    int month,year;
//    cin>>month>>year;
//    if(month>12){cout<<"Enter the any number between 1-12 as month denotes"<<endl;}
//    else{
//        cout<<"The number of days is : ";
//        if(month==2 && ((year%4==0) &&(year%100)!=0||(year%400==0)))
//            { cout<<"29\n";}
//        else if(month==2){cout<<"28\n";}
//        else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){cout<<"31\n";}
//        else{cout<<"30\n";}}
        int n,digit,count=0;
        cin>>n>>digit;
        while(n)
        {
            if(n%10==digit){count++;}
            n=n/10;
        }
        cout<<count<<endl;
}
