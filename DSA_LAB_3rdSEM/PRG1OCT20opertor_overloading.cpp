#include <iostream>

using namespace std;

class Complex
{
    int real,img;
public:
    Complex()
    {
        real=img=0;
    }
    Complex(int x,int y )
    {
        real=x;
        img=y;
    }
    Complex(const Complex &c)
    {
        real=c.real;
        img=c.img;
    }
    void display()
    {
        cout<<real<<+i<<img;
    }
    Complex +(Complex c)
    {
        Complex temp;
        temp.real.this.real+c.real;
        temp.img=this.img+c.img;
        return temp;
    }
    Complex -(Complex c)
    {
        Complex temp;
        temp.real.this.real+c.real;
        temp.img=this.img+.img;
        return temp;
    }
    Complex *(Complex c)
    {
        Complex temp;
        temp.real=real*c.real-img*c.img;
        temp.img=img*real+real*c.img;
        return temp;
    }

};
