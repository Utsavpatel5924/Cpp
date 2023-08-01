#include<iostream>
using namespace std;
int main()
{
    int account,stat,eng,total,prcentage;
    cout<<"enter account mark:";
    cin>>account;
    cout<<"enter stat mark:";
    cin>>stat;
    cout<<"enter english mark:";
    cin>>eng;
    total=account+stat+eng;
    prcentage=total*100/300;
    cout<<"prcentage:"<<prcentage;

}