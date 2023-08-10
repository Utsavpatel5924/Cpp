#include<iostream>
using namespace std;
class bill{
    public:
    string name;
    int number;
    bill()
    {
        cout<<"------WECOME TO BHAGAVTI RESTAURANT------"<<endl;
    }

    ~bill()
    {
        cout<<"------THANK TOU FOR VISIT------"<<endl;
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

        if(5000<x)
        {
            discount = (x * 5) / 100;
        }
        else
        {
            discount =0;
        }
        sgst = (x * 2.5) / 100;
        cgst = (x * 2.5) / 100;
        
        netbill = x - discount + sgst + cgst;
        
 
        
        cout<<"\n............Your Bill .................."<<endl;
        cout<<"toal.............."<<x<<endl;
        cout <<"Discount......  "<< discount << endl;
        cout <<"SGST............"<<  sgst << endl;
        cout <<"CGST............"<<  cgst << endl;
        // cout<<".............................."<<endl;
        cout <<"Net amount......"<<  netbill << endl;
        cout<<"\n"<<endl;
        
        
    }
};
int main()
{
    bill a;
    a.getinfo();
    int i,choice,total=0,amount;
    int quantity[10]={0,0,0,0,0,0,0,0,0,0};

    for(i=1;i!=(choice==11);i++)
    {
        cout<<"chose number "<<endl;
        cout<<"1.Small Gujarati thali..................150"<<endl;
        cout<<"2.Small Punjabi thali...................250"<<endl;
        cout<<"3.Small Rajasthani thali................300"<<endl;
        cout<<"4.Medium Gujarati thali.................350"<<endl;
        cout<<"5.Medium Punjabi thali..................400"<<endl;
        cout<<"6.Medium Rajasthani thali...............500"<<endl;
        cout<<"7.Large Gujarati thali..................650"<<endl;
        cout<<"8.Large Punjabi thali...................750"<<endl;
        cout<<"9.Large Rajasthani thali................850"<<endl;
        cout<<"10.Bahubali thali......................1000 "<<endl;
        cout<<"11.Complet oder............................"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Gujarati thali"<<endl;
            cin>>quantity[0];
            amount=total+150*quantity[0];
            total=amount;
            quantity[0]+=quantity[0];
            break;

            case 2:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Punjabi thali"<<endl;
            cin>>quantity[1];
            amount=total+250*quantity[1];
            total=amount;
            quantity[1]+=quantity[1];
            break;

            case 3:
            cout<<"Enter quntity: "<<endl;
            cout<<"Small Rajasthani thali"<<endl;
            cin>>quantity[2];
            amount=total+300*quantity[2];
            total=amount;
            quantity[2]+=quantity[2];
            break;

            case 4:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Gujarati thali"<<endl;
            cin>>quantity[3];
            amount=total+350*quantity[3];
            total=amount;
            quantity[3]+=quantity[3];
            break;

            case 5:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Punjabi thali"<<endl;
            cin>>quantity[4];
            amount=total+400*quantity[4];
            total=amount;
            quantity[4]+=quantity[4];
            break;

            case 6:
            cout<<"Enter quntity: "<<endl;
            cout<<"Medium Rajasthani thali"<<endl;
            cin>>quantity[5];
            amount=total+500*quantity[5];
            total=amount;
            quantity[5]+=quantity[5];
            break;

            case 7:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Gujarati thali"<<endl;
            cin>>quantity[6];
            amount=total+650*quantity[6];
            total=amount;
            quantity[6]+=quantity[6];
            break;

            case 8:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Punjabi thali"<<endl;
            cin>>quantity[7];
            amount=total+750*quantity[7];
            total=amount;
            quantity[7]+=quantity[7];
            break;

            case 9:
            cout<<"Enter quntity: "<<endl;
            cout<<"Large Rajasthani thali"<<endl;
            cin>>quantity[8];
            amount=total+850*quantity[8];
            total=amount;
            quantity[8]+=quantity[8];
            break;

            case 10:
            cout<<"Enter quntity: "<<endl;
            cout<<"Maharaja thali"<<endl;
            cin>>quantity[9];
            amount=total+1000*quantity[9];
            total=amount;
            quantity[9]+=quantity[9];
            break;

            


            default:
            cout<<"Wrong choise............"<<endl;
            break;

            
        
        }
        if(choice==11){
            break;
        }
       
    }
     cout << "          BHAGAVTI RESTAURANT            " << endl;
   
     cout<<"Item..................."<<"\t"<<"Qty"<<"\t"<<"Price"<<"\t"<<"total"<<endl;
 if(quantity[0]!=0)
 cout<<"1.Small Gujarati thal....."<<"\t"<<quantity[0]<<"\t"<<"150"<<"\t"<<150 * quantity[0]<<endl;
 if(quantity[1]!=0)
 cout<<"2.Small Punjabi thali....."<<"\t"<<quantity[1]<<"\t"<<"250"<<"\t"<<250 * quantity[1]<<endl;
 if(quantity[2]!=0)
 cout<<"3.Small Rajasthani thali.."<<"\t"<<quantity[2]<<"\t"<<"300"<<"\t"<<300 * quantity[2]<<endl;
 if(quantity[3]!=0)
 cout<<"4.Medium Gujarati thali..."<<"\t"<<quantity[3]<<"\t"<<"350"<<"\t"<<350 * quantity[3]<<endl;
 if(quantity[4]!=0)
 cout<<"5.Medium Punjabi thali...."<<"\t"<<quantity[4]<<"\t"<<"400"<<"\t"<<400 * quantity[4]<<endl;
 if(quantity[5]!=0)
 cout<<"6.Medium Rajasthani thali."<<"\t"<<quantity[5]<<"\t"<<"500 "<<"\t"<<500 * quantity[5]<<endl;
 if(quantity[6]!=0)
 cout<<"7.Large Gujarati thal....i"<<"\t"<<quantity[6]<<"\t"<<"650"<<"\t"<<650 * quantity[6]<<endl;
 if(quantity[7]!=0)
 cout<<"8.Large Punjabi thali....."<<"\t"<<quantity[7]<<"\t"<<"750"<<"\t"<<750 * quantity[7]<<endl;
 if(quantity[8]!=0)
 cout<<"9.Large Rajasthani thali.."<<"\t"<<quantity[8]<<"\t"<<"850"<<"\t"<<850 * quantity[8]<<endl;
 if(quantity[9]!=0)
 cout<<"10.Bahubali  thali......."<<"\t"<<quantity[9]<<"\t"<<"1000"<<"\t"<<1000 * quantity[9]<<endl;
    
    a.calc(total);

}