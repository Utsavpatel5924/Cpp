#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value:";
    cin>>b;
    cout<<"even number betweeen 1 to"<<"are"<<b;
    for(a=0;a<=b;a+=2)
    {
       cout<<"\n"<<a;
    }
}