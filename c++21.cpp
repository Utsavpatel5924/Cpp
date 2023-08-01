#include<iostream>
using namespace std;
int main()
{
    int  byear,year;
    cout<<"enter birth of year:";
    cin>>byear;
    year=2023-byear;
    if(year>18)
    {
        cout<<"you are elibal for voting";
    }
    else
    {
        cout<<"you are not elibal for voting";
    }
}