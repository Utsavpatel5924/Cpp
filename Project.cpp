#include<iostream>
using namespace std;
class bill{
    public:
    string name;
    int number;
    bill()
    {
        cout<<"WECOME TO BHAGAVTI RESTAURANT"<<endl;
    }

    int getinfo()
   {
     cout << "Enter Customer name :" << endl;
     cin >> name;
     cout << "Enter customer Mobile Number :" << endl;
     cin >> number;
   }
    int calc(int x)
    {
   
        float discount;
        float sgst, cgst;
        float netbill;

        discount = (x * 10) / 100;
        sgst = (x * 2.5) / 100;
        cgst = (x * 2.5) / 100;
        netbill = x - discount + sgst + cgst;

 

        cout <<"Discount......  "<< discount << endl;
        cout <<"SGST............"<<  sgst << endl;
        cout <<"CGST............"<<  cgst << endl;
        cout <<"Net amount......"<<  netbill << endl;
  
    }
};
int main()
{
    bill a;
    a.getinfo();
    int i,choice,total=0,quntity,amount;

    for(i=0;i<=10;i++)
    {
        cout<<"chose number "<<endl;
        cout<<"1.Small Gujarati thali..................150"<<endl;
        cout<<"2.Small Punjabi thali...................250"<<endl;
        cout<<"3.Small Rajasthani thali................300"<<endl;
        cout<<"4.Medium Gujarati thali..................350"<<endl;
        cout<<"5.Medium Punjabi thali...................400"<<endl;
        cout<<"6.Medium Rajasthani thali................500"<<endl;
        cout<<"7.Large Gujarati thali..................650"<<endl;
        cout<<"8.Large Punjabi thali...................750"<<endl;
        cout<<"9.Large Rajasthani thali................850"<<endl;
        cout<<"10.Bahubali maharaja thali..............1000 "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Gujarati thali"<<endl;
            cin>>quntity;
            amount=total+150*quntity;
            total=amount;
            break;

            case 2:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Punjabi thali"<<endl;
            cin>>quntity;
            amount=total+250*quntity;
            total=amount;
            break;

            case 3:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Rajasthani thali"<<endl;
            cin>>quntity;
            amount=total+300*quntity;
            total=amount;
            break;

            case 4:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Gujarati thali"<<endl;
            cin>>quntity;
            amount=total+350*quntity;
            total=amount;
            break;

            case 5:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Punjabi thali"<<endl;
            cin>>quntity;
            amount=total+400*quntity;
            total=amount;
            break;

            case 6:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Rajasthani thali"<<endl;
            cin>>quntity;
            amount=total+500*quntity;
            total=amount;
            break;

            case 7:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Gujarati thali"<<endl;
            cin>>quntity;
            amount=total+650*quntity;
            total=amount;
            break;

            case 8:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Punjabi thali"<<endl;
            cin>>quntity;
            amount=total+750*quntity;
            total=amount;
            break;

            case 9:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Rajasthani thali"<<endl;
            cin>>quntity;
            amount=total+850*quntity;
            total=amount;
            break;

            case 10:
            cout<<"Enter quntity: "<<endl;
            cout<<"Maharaja bahubali thali"<<endl;
            cin>>quntity;
            amount=total+1000*quntity;
            total=amount;
            break;

            default:
            cout<<"Wrong choise"<<endl;
            break;
        }
        
       
    }
    a.calc(total);

}