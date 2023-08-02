#include <iostream>
using namespace std;
class base1
{
protected:
    int n;

public:
    void setn()
    {
        cout << "Enter n :" << endl;
        cin >> n;
    }
};

class base2 : public base1
{
public:
    int a = 1;
};

class derived : public base2
{
public:
    void square()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a * a << " ";
            a++;
        }
    }
};

int main()
{
    derived d;
    d.setn();
    d.square();
}