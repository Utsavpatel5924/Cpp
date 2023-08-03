#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public:
    void setn()
    {
        cout<<"enter n:"<<endl;
        cin>>n;
    }
};
class derive1 : public base{
    public:
    void table()
    {
        for(int i=1;i<=10;i++)
        {
            cout<<n<<"*"<<i<<"="<<n*i<<endl;
        }
    }
};
class derive2 : public base
{
    protected:
    int r,d,i;
    public:
    void reverce()
    {
        int i=1;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            cout<<r;
            i++;
        }
    }
};
int main()
{
    derive1 d;
    d.setn();
    d.table();

    derive2 z;
    z.setn();
    z.reverce();

}