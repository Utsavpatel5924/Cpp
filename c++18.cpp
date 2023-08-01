#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a :";
    cin>>a;
    if(a>0)
    {
        if(a<0)
        {
            cout<<"a is positive";
        }
        else
        {
            cout<<"a is nagative ";
        }
    }else
    {
        cout<<"a is zero";
    }
}