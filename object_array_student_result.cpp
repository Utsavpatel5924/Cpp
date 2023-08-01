#include<iostream>
using namespace std;

class marks{
    int guj,math,eng;
    public:
    void setdata()
    {
        cout<<"Enter Gujarati:";
        cin>>guj;
        cout<<"Enter Maths:";
        cin>>math;
        cout<<"Enter English:";
        cin>>eng;
        
        
    }
    void getdata()
    {
        cout<<"Total:"<<guj+math+eng<<endl;
        
    
    }
  


};
int main()
{
    
    marks a[3];
    
    for(int i=0; i<3; i++)
    {
        cout<<"Enter the marks of student"<< i+1<<endl;
        a[i].setdata();
        
        
    }
    
    for(int i=0; i<3; i++)
    {

        a[i].getdata();
       
    }
    
}