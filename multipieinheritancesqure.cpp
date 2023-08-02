#include <iostream>
using namespace std;
class base1{
protected:
    int n;

public:
    void getNumber()
    {
        cout << "Enter the value of n: ";
        cin >> n;
    }

};
class base2{
    public:
    int i=1;

};
class derive : public base1, public base2{
    public:
    void printSquaredNumbers()
    {
        cout << "Squares of numbers from 1 to " << n << ":" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
};


int main()
{
   derive d;
   d.getNumber();
   d.printSquaredNumbers();
}