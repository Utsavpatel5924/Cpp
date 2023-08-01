#include<iostream>
using namespace std;
class area{
    public:
   
    area(int l)
    {
        cout<<" area of squrq:"<<l*l<<endl;
    }
    area(int l,int b)
    {
        cout<<"area of rectangale:"<<l*b<<endl;
    }
    area(double r)
    {
        cout<<"area of circle:"<<3.14*r*r<<endl;
    }
    area(double b,double h)
    {
        cout<<"area of triangale:"<<3.14*b*h<<endl;
    }
};
int main()
{
     area l(2),a(7,8),c(2.4),d(3.1,4.5);
}