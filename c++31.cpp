#include<iostream>
using namespace std;
int main()
{
    int i;
    char j=65;
    for(i=65;i<90;i++)
    {
        cout<<i;
        cout<<"=";
        cout<<j++;
    }
}