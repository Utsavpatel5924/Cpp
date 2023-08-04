#include <iostream>
using namespace std;
class ATM

{

protected:
    int cb; // current balance
    int a; // amount
    int w; // withdraw
    int d; // deposit

public:
    int current()
    {

        return cb = 10000;
    }

    int withdraw()
    {
        cout << "Enter amount to be withdrawn :" << endl;
        cin >> w;

        if (w > cb)
        {
            cout << "Insufficient balance " << endl;
        }
        else
        {
            cout << "Your remaining balance :" << cb - w << endl;

            cb -= w;
        }
    }
    int deposit()
    {
        cout << "Enter amout to Deposit :" << endl;
        cin >> d;
        cout << "Your remaining balance :" << cb + d << endl;
        cb += d;
    }

    int balance()
    {
        cout << "Your balance is :" << cb << endl;
    }
};

int main()
{
    ATM a;
    a.current();
    cout << "Your current balance is :" << a.current() << endl;

    for (int i = 1; i <= 9; i++)
    {
        int ch;
        cout << "1.withdraw cash " << endl;
        cout << "2.Deposit cash " << endl;
        cout << "3.Show balance " << endl;
        cout << "4.Exit" << endl;

        cout<<"Enter your choice :"<<endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            a.withdraw();
            break;

        case 2:
            a.deposit();
            break;

        case 3:
            a.balance();
            break;

        default:
            break;
        }

        if(ch==4){
            break;
        }
    }
}