#include<iostream>
using namespace std;
int main()
{
    char c;
    for(c=65;c<=90;++c)
    {
       cout<<"  "<<c;
    
        cout<<"-"<<(char)(c+32);
    }
}
