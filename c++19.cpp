#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value:";
    cin>>a;
    if(a>75)
    {
        cout<<"grade a";
    }
    else if(a>=60 && a<75)
    {
        cout<<"gread b";
    }
    else if(a>=45 && a<60)
    {
        cout<<"gread c";
    }
    else if(a>=35 && a<45)
    {
        cout<<"gread d";
    }
    else 
    {
        cout<<"fail";
    }

}