//WAP TO CALCULATE FACTORIAL OF A NUMBER USING RECURSION
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the number whose factorial is to be calculated: \n";
    cin>>n;
    int p=fact(n);
    cout<<"The factorial of "<<n<<" is: "<<p;
    return 0;
}
