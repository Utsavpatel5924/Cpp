#include<iostream>
using namespace std;
class hello{
    public:
   
    void area(int l)
    {
        cout<<"area of squre:"<<l*l<<endl;
    }
    void area(int l,int b)
    {
        cout<<"area of rectangale:"<<l*b<<endl;
    }
    void area(double b,double h)
    {
        cout<<"area of triangale:"<<3.14*b*h<<endl;
    }
    void area(double r)
    {
        cout<<"area of circle:"<<3.14*r*r<<endl;
    }
};
int main()
{
    hello a;
    a.area(9);
    a.area(9,5);
    a.area(3.1,5.4);
    a.area(5.0);
}