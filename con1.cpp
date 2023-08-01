#include<iostream>
using namespace std;

class marksheet{

    int sn,p,c,m;
    char sname[20];
    float total;
    float pr;

    public:
    marksheet()
    {
        cout<<"Enter the adm no:"<<endl;
        cin>>sn; 
        cout<<"Enter the adm name:"<<endl;    
        cin>>sname;
        cout<<"Enter the physics marks:"<<endl;
        cin>>p;
        cout<<"Enter the maths marks:"<<endl;
        cin>>m;
        cout<<"Enter the chemistry marks:"<<endl;
        cin>>c;
        total=p+c+m;
        pr=(total*100)/300;
    }
    void display()
    {
        cout<<"Enter the adm no:"<<sn<<endl;
        cout<<"Enter the adm name:"<<sname<<endl;
        cout<<"physic:"<<p<<endl;
        cout<<"chemistry:"<<c<<endl;
        cout<<"maths:"<<m<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"percentage:"<<pr<<endl;

    }
};
int main()
{
    marksheet m;
    m.display();


}