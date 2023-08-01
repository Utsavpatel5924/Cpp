#include<iostream>
using namespace std;
class Number{
    int real,img;
    public:
    void setdata(int a,int b)
    {
        real=a,img=b;
    }
    void getdata()
    {
        cout<<"num is:"<<real<<"+"<<img<<"i"<<endl;
    }
    Number operator--(){
        Number t;
        t.real=--real;
        t.img=--img;
        return t;
    }

};
int main()
{
    Number n,m;
    n.setdata(2,5);
    n.getdata();
    --n;
    m=n;//3   6
    m.getdata();
}