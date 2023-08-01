#include <iostream>
using namespace std;
class large
{
    int x, y;
    friend large add(large);

public:
    void setdata(int a, int b)
    {
        cin >> x >> y;
        //  x=a,y=b;
    }
    void getdata()
    {
        // cout << "number is:" << x << "\t" << y << endl;
    }
};
large add(large p)
{
    large t;
    t.x = p.x;
    t.y = p.y;

    if (t.x > t.y)
    {
        cout << "A is large "<< endl;
    }
    else
    {
        cout << "B is large "  << endl;
    }
}
int main()
{
    int a, b;
    large n;
    n.setdata(a, b);
    n.getdata();

    add(n);
}