#include<iostream>
using namespace std;
int main()
{
    float b,n;
    cout<<"enter salary:";
    cin>>b;
    if(b<=5000)
    {
        n=b+(b*0.08)+(b*0.20);
        cout<<"net salary:"<<n;
    }
    else if(b>5000 && b<=10000)
    {
        n=b+(b*0.12)+(b*0.30);
        cout<<"net salary:"<<n;
    }
    else if(b>1000 && b<=1500)
    {
        n=b+(b*0.15)+(b*0.40);
        cout<<"net salary:"<<n;
    }
    else 
    {
        n=b+(b*0.20)+(b*0.50);
        cout<<"total salary :"<<n;
    }

}